#include <badgerloop.h>
#include <NCD9830DBR2G.h>
#include <braking.h>
#include <data.h>
#include <stdio.h>
#include <lv_iox.h>
#include <pthread.h>


#define VOLTAGE_SCALING(x) ( ((((x / 256) * 5) - 0.5) / 4) * 2000)
#define CURRENT_SCALING(x) ( ((((x / 256) * 5) - 0.6) / 2.4) * 500)

#define RING_SIZE  10
static double avgDouble(double *arr, int size) {
int initPressureMonitor() {
    
}

void *pressureMonitor() {
    double primTankRing[RING_SIZE];
    double primLineRing[RING_SIZE];
    double primActRing[RING_SIZE];

    double secTankRing[RING_SIZE];
    double secLineRing[RING_SIZE];
    double secActRing[RING_SIZE];

    uint64_t i = 0;

    while(1) {
        primTankRing[i % RING_SIZE] = readPrimaryTank();
        primLineRing[i % RING_SIZE] = readPrimaryLine();
        primActRing[i % RING_SIZE]  = readPrimaryActuator();

        secTankRing[i % RING_SIZE]  = readSecTank();
        secLineRing[i % RING_SIZE]  = readSecLine();
        secActRing[i % RING_SIZE]   = readSecActuator();

        data->pressures->primTank = avgDouble(primTankRing, RING_SIZE);
        data->pressures->primLine = avgDouble(primLineRing, RING_SIZE);
        data->pressures->primAct  = avgDouble(primActRing,  RING_SIZE); 
    }

    return NULL;
}

static double avgDouble(double *arr, int size) {
    int i = 0; 
    double sum = 0;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / (double) size;
}

void brakePrimary() {
    if (solenoidSet(SOLENOID_0, 0) != 0) {
        fprintf(stderr, "Failed to set SOLENOID_0\n");
        return;
    }
    if (solenoidSet(SOLENOID_1, 0) != 0) {
        fprintf(stderr, "Failed to set SOLENOID_1\n");
        return;
    }
}

void brakeSecondary() {
    return;
}

void brakePrimaryRelease() {
    if (solenoidSet(SOLENOID_0, 1) != 0) {
        fprintf(stderr, "Failed to set SOLENOID_0\n");
        return;
    }
    if (solenoidSet(SOLENOID_1, 0) != 0) {
        fprintf(stderr, "Failed to set SOLENOID_1\n");
        return;
    }
}

//Voltage
double readPrimaryTank() {
    uint8_t data[2];
    if (readPressureSensor(ADC_1, PS_TANK, data) != OK)
        return -1;

    return (VOLTAGE_SCALING(data[0]));
}

//Current
double readPrimaryLine() {
    uint8_t data[2];
    if (readPressureSensor(ADC_1, PS_LINE, data) != OK)
        return -1;
//    return data[0];
    return ( CURRENT_SCALING(data[0]) );
}

//Current
double readPrimaryActuator() {
    uint8_t data[2];
    if (readPressureSensor(ADC_1, PS_ACTUATE, data) != OK) {
        return -1;
    }
    return ( CURRENT_SCALING(data[0]) );
}

//Voltage
double readSecTank() {
    return -1;
}

//Current
double readSecLine() {
    return -1;
}

//Current
double readSecActuator() {
    return -1;
}

/* Damn I dont know how to spell vessel */
double readPressureVessel() {
    return 0;
}
