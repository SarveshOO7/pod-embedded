DRIVERS = drivers
PERIPHERALS = peripherals
EMBD_EXAMPLES = tests

DRIVER_SRC_DIR = embedded/drivers/src
PERIPHERAL_SRC_DIR = embedded/peripherals/src
EMBD_EXAMPLES_SRC_DIR = embedded/examples
MIDDLEWARE_SRC_DIR = middleware/src
MIDDLEWARE_EX_DIR = middleware/examples
APP_SRC_DIR = embedded/app/src
MAIN_SRC_DIR = embedded/app/main

OUTPUT_DIR := out
OBJ_DIR = $(OUTPUT_DIR)/obj
OBJ_DIR_DRIVER = $(OUTPUT_DIR)/obj
OBJ_DIR_PERIPHERAL = $(OUTPUT_DIR)/obj
OBJ_DIR_EXAMPLE = $(OUTPUT_DIR)/obj/tests
OBJ_DIR_MDL = $(OUTPUT_DIR)/obj
OBJ_DIR_MDL_EXAMPLE = $(OUTPUT_DIR)/obj/tests
OBJ_DIR_APP = $(OUTPUT_DIR)/obj
OBJ_DIR_MAIN = $(OUTPUT_DIR)/obj/main


DRIVER_SRC = $(wildcard $(DRIVER_SRC_DIR)/*.c)
PERIPHERAL_SRC = $(wildcard $(PERIPHERAL_SRC_DIR)/*.c)
EMBD_EXAMPLES_SRC = $(wildcard $(EMBD_EXAMPLES_SRC_DIR)/*.c)
MDL_SRC = $(wildcard $(MIDDLEWARE_SRC_DIR)/*.cpp)
MDL_EXAMPLES_SRC = $(wildcard $(MIDDLEWARE_EX_DIR)/*.cpp)
APP_SRC = $(wildcard $(APP_SRC_DIR)/*.c)
MAIN_SRC = $(wildcard $(MAIN_SRC_DIR)/*.cpp)

DRIVER_OBJ := $(DRIVER_SRC:$(DRIVER_SRC_DIR)/%.c=$(OBJ_DIR_DRIVER)/%.o)
PERIPHERAL_OBJ := $(PERIPHERAL_SRC:$(PERIPHERAL_SRC_DIR)/%.c=$(OBJ_DIR_PERIPHERAL)/%.o)
EMBD_EXAMPLES_OBJ := $(EMBD_EXAMPLES_SRC:$(EMBD_EXAMPLES_SRC_DIR)/%.c=$(OBJ_DIR_EXAMPLE)/%.o)
MDL_OBJ := $(MDL_SRC:$(MIDDLEWARE_SRC_DIR)/%.cpp=$(OBJ_DIR_MDL)/%.o)
MDL_EXAMPLES_OBJ := $(MDL_EXAMPLES_SRC:$(MIDDLEWARE_EX_DIR)/%.cpp=$(OBJ_DIR_MDL_EXAMPLE)/%.o)
APP_OBJ := $(APP_SRC:$(APP_SRC_DIR)/%.c=$(OBJ_DIR_APP)/%.o)
MAIN_OBJ := $(MAIN_SRC:$(MAIN_SRC_DIR)/%.cpp=$(OBJ_DIR_MAIN)/%.o)

MAIN_OBJ_D = $(wildcard $(OBJ_DIR_MAIN)/*.o)
MAIN_MAKE := $(MAIN_OBJ_D:$(OBJ_DIR_MAIN)/%.o=$(OUTPUT_DIR)/%)

EX_OUT := out
EMBD_EX_OBJ_D = $(wildcard $(OBJ_DIR_EXAMPLE)/*.o)
EMBD_EXAMPLES_MAKE := $(EMBD_EX_OBJ_D:$(OBJ_DIR_EXAMPLE)/%.o=$(EX_OUT)/%)

FORMAT_SRC = $(addprefix format,$(APP_SRC)) $(addprefix format,$(PERIPHERAL_SRC)) $(addprefix format, $(DRIVER_SRC))

GCC := gcc
GPP := g++
CPPFLAGS += -Iembedded/drivers/include -Iembedded/peripherals/include -Imiddleware/include -Imiddleware/include/jsonlib -Iembedded/data -Iembedded/app/include
CFLAGS += -Wall -std=gnu11
CPFLAGS += -Wall -Wextra -std=c++11
LDFLAGS += -Llib
LDLIBS += -lm -lpthread

.PHONY: all clean tests

all: main_tgts
	make main_tgts
	
main_tgts: directories MAIN_SUPPORT_OBJ $(MAIN_MAKE)

examples: examples_make
	make examples_make

examples_make: example_directories $(EMBD_EXAMPLES) $(EMBD_EXAMPLES_MAKE)

directories: ${OBJ_DIR} ${OBJ_DIR_MAIN}

example_directories: ${OBJ_DIR_EXAMPLE} ${OBJ_DIR_MAIN}

${OBJ_DIR}:
	mkdir -p ${OBJ_DIR}
	
${OBJ_DIR_EXAMPLE}:
	mkdir -p ${OBJ_DIR_EXAMPLE}
	
${OBJ_DIR_MAIN}:
	mkdir -p ${OBJ_DIR_MAIN}
	
MAIN_SUPPORT_OBJ: $(DRIVER_OBJ) $(PERIPHERAL_OBJ) $(MDL_OBJ) $(MAIN_OBJ)

	
$(EMBD_EXAMPLES): $(DRIVER_OBJ) $(PERIPHERAL_OBJ) $(MDL_OBJ) $(EMBD_EXAMPLES_OBJ) $(MDL_EXAMPLES_OBJ)
	
$(EX_OUT)/%: $(OBJ_DIR_EXAMPLE)/%.o $(DRIVER_OBJ) $(PERIPHERAL_OBJ) $(MDL_OBJ) 
	$(GPP) $(LDFLAGS) $^ $(LDLIBS) -o $@
	
$(OUTPUT_DIR)/%: $(OBJ_DIR_MAIN)/%.o $(DRIVER_OBJ) $(PERIPHERAL_OBJ) $(MDL_OBJ) 
	$(GPP) $(LDFLAGS) $^ $(LDLIBS) -o $@


$(OBJ_DIR_DRIVER)/%.o: $(DRIVER_SRC_DIR)/%.c
	$(GCC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@
	
$(OBJ_DIR_PERIPHERAL)/%.o: $(PERIPHERAL_SRC_DIR)/%.c
	$(GCC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@
		
$(OBJ_DIR_EXAMPLE)/%.o: $(EMBD_EXAMPLES_SRC_DIR)/%.c
	$(GCC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

$(OBJ_DIR_MDL)/%.o: $(MIDDLEWARE_SRC_DIR)/%.cpp
	$(GPP) $(CPPFLAGS) $(CPFLAGS) -c $< -o $@
	
$(OBJ_DIR_MDL_EXAMPLE)/%.o: $(MIDDLEWARE_EX_DIR)/%.cpp
	$(GPP) $(CPPFLAGS) $(CPFLAGS) -c $< -o $@
	
$(OBJ_DIR_APP)/%.o: $(APP_SRC_DIR)/%.c
	$(GCC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@
	
$(OBJ_DIR_MAIN)/%.o: $(MAIN_SRC_DIR)/%.cpp
	$(GPP) $(CPPFLAGS) $(CPFLAGS) -c $< -o $@

$(FORMAT_SRC): 
	clang-format -style=llvm $(@:format%=%) > $(@:format%=%).log

format: $(FORMAT_SRC)

scan: 
	scan-build make > scan_build_out.log
	
clean:
	rm -rf $(OUTPUT_DIR)