#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <inttypes.h>
#include <unistd.h>
#include <math.h>
#include "i2c.h"
#include "mcp23017.h"

int setupMCP(i2c_settings * i2c, char mcpAddress) {
    i2c->bus = 2;
    i2c->deviceAddress = mcpAddress;
    i2c->openMode = O_RDWR;
    if (i2c_begin(i2c) == -1) {
        fprintf(stderr, "Could not open i2c bus.\n");
        return -1;
    }

    // Set IODIRA/B to make all pins configured as output
    write_data_i2c(i2c, IODIRA, 0x00);
    write_data_i2c(i2c, IODIRB, 0x00);
 
}

// helper method for getting data from a specific address
static uint8_t getFromAddress(i2c_settings * i2c, char address, uint8_t pin) {
	write_byte_i2c(i2c, address);

	uint8_t dataBuffer[1];
	read_i2c(i2c, dataBuffer, 1);

	return (dataBuffer[0] >> pin) & 1; // getting the digit corresponding to the pin
}
/* TODO temp function, going to replace with a faster solution by using a 0x<Bank><pin> encoding later */
static uint8_t makeRelativeToBank(uint8_t pin) {
    /* If its in bank B, we need to shif the numbering convention */
    if (pin > (NUM_PINS >> 1)) {
        pin -= (NUM_PINS >> 1);
    }
    return pin;
}

static int validatePin(uint8_t pin) {
    /* Check that we are getting a valid pin */
    if (pin >= NUM_PINS) {
        return -1;
    }
    return 0;
}

static char getIodirBank(uint8_t pin) {
    if (pin < (NUM_PINS >> 1)) {
        return IODIRA;
    } else {
        return IODIRB;
    }
}

static char getGpioBank(uint8_t pin) {
    if (pin < (NUM_PINS >> 1)) {
        return GPIOA;
    } else {
        return GPIOB;
    }
}

int getState(i2c_settings * i2c, uint8_t pin) {
    if (validatePin(pin) == -1) {
        fprintf(stderr, "Invalid pin input getState\n");
        return -1;
    }
    char addr = getGpioBank(pin);
    pin = makeRelativeToBank(pin);
    return getFromAddress(i2c, addr, pin);
}

int setState(i2c_settings * i2c, uint8_t pin, bool val) {
    if (validatePin(pin) == -1) {
        fprintf(stderr, "setState: Invalid pin number\n");
        return -1;
    }
    if (getDir(i2c, pin) != 0) {
        fprintf(stderr, "setState: Only can set value on an output\n");
        return -1;
    }
    char address = getGpioBank(pin);
    
    
    uint8_t currentState = getState(i2c, pin);
    if (val == currentState) { // no changes to be made
        return 0;
    }
    pin = makeRelativeToBank(pin);
    // uint8_t newState; TODO Discuss
    // TODO: Discuss; right idea but there is a better way!
    if (val == 0) { // change it form 1 to 0
	    write_data_i2c(i2c, address, currentState - pow(2, pin));
    } else if (val == 1) { // change it from 0 to 1
	    write_data_i2c(i2c, address, currentState + pow(2, pin));
    } else {
        fprintf(stderr, "Invalid val arg setState");
    }
    return 0;
}

int getDir(i2c_settings * i2c, uint8_t pin) {
    if (validatePin(pin) == -1) {
        fprintf(stderr, "Invalid pin\n");
        return -1;
    }
    char addr = getIodirBank(pin);
    pin = makeRelativeToBank(pin);
	return getFromAddress(i2c, addr, pin);
}

int setDir(i2c_settings * i2c, uint8_t pin, bool val) {
    if (validatePin(pin) == -1) {
        fprintf(stderr, "Invalid pin");
    }
    
    char address = getIodirBank(pin);
    
    int currentState = getDir(i2c, pin);
    if (val == currentState) {
        return 0;
    }
    pin = makeRelativeToBank(pin);
    // uint8_t newState; TODO: Discuss
    
    // TODO: Discuss
    if (val == 0) { // change it form 1 to 0
	    write_data_i2c(i2c, address, currentState - pow(2, pin));
    } else if (val == 1) { // change it form 0 to 1
	    write_data_i2c(i2c, address, currentState + pow(2, pin));
    } 
    return 0;
}
