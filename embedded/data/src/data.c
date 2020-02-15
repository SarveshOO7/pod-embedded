/* 
 * Please note that this is an auto-generated file which is automatically generated whenever a target is built.
 */

#include <pthread.h>
#include "data.h"


/* Autogenerated Code Begins */
int getDataState() {
	pthread_mutex_lock(&data->dataMutex);
	int val = data->state;
	pthread_mutex_unlock(&data->dataMutex);
	return val;
}

void setDataState(int val) {
	pthread_mutex_lock(&data->dataMutex);
	data->state  = val;
	pthread_mutex_unlock(&data->dataMutex);
}

double getPressurePrimTank() {
	pthread_mutex_lock(&data->pressure->pressureMutex);
	double val = data->pressure->primTank;
	pthread_mutex_unlock(&data->pressure->pressureMutex);
	return val;
}

void setPressurePrimTank(double val) {
	pthread_mutex_lock(&data->pressure->pressureMutex);
	data->pressure->primTank  = val;
	pthread_mutex_unlock(&data->pressure->pressureMutex);
}

double getPressurePrimLine() {
	pthread_mutex_lock(&data->pressure->pressureMutex);
	double val = data->pressure->primLine;
	pthread_mutex_unlock(&data->pressure->pressureMutex);
	return val;
}

void setPressurePrimLine(double val) {
	pthread_mutex_lock(&data->pressure->pressureMutex);
	data->pressure->primLine  = val;
	pthread_mutex_unlock(&data->pressure->pressureMutex);
}

double getPressurePrimAct() {
	pthread_mutex_lock(&data->pressure->pressureMutex);
	double val = data->pressure->primAct;
	pthread_mutex_unlock(&data->pressure->pressureMutex);
	return val;
}

void setPressurePrimAct(double val) {
	pthread_mutex_lock(&data->pressure->pressureMutex);
	data->pressure->primAct  = val;
	pthread_mutex_unlock(&data->pressure->pressureMutex);
}

double getPressureSecTank() {
	pthread_mutex_lock(&data->pressure->pressureMutex);
	double val = data->pressure->secTank;
	pthread_mutex_unlock(&data->pressure->pressureMutex);
	return val;
}

void setPressureSecTank(double val) {
	pthread_mutex_lock(&data->pressure->pressureMutex);
	data->pressure->secTank  = val;
	pthread_mutex_unlock(&data->pressure->pressureMutex);
}

double getPressureSecLine() {
	pthread_mutex_lock(&data->pressure->pressureMutex);
	double val = data->pressure->secLine;
	pthread_mutex_unlock(&data->pressure->pressureMutex);
	return val;
}

void setPressureSecLine(double val) {
	pthread_mutex_lock(&data->pressure->pressureMutex);
	data->pressure->secLine  = val;
	pthread_mutex_unlock(&data->pressure->pressureMutex);
}

double getPressureSecAct() {
	pthread_mutex_lock(&data->pressure->pressureMutex);
	double val = data->pressure->secAct;
	pthread_mutex_unlock(&data->pressure->pressureMutex);
	return val;
}

void setPressureSecAct(double val) {
	pthread_mutex_lock(&data->pressure->pressureMutex);
	data->pressure->secAct  = val;
	pthread_mutex_unlock(&data->pressure->pressureMutex);
}

double getPressureAmb() {
	pthread_mutex_lock(&data->pressure->pressureMutex);
	double val = data->pressure->amb;
	pthread_mutex_unlock(&data->pressure->pressureMutex);
	return val;
}

void setPressureAmb(double val) {
	pthread_mutex_lock(&data->pressure->pressureMutex);
	data->pressure->amb  = val;
	pthread_mutex_unlock(&data->pressure->pressureMutex);
}

double getPressurePv() {
	pthread_mutex_lock(&data->pressure->pressureMutex);
	double val = data->pressure->pv;
	pthread_mutex_unlock(&data->pressure->pressureMutex);
	return val;
}

void setPressurePv(double val) {
	pthread_mutex_lock(&data->pressure->pressureMutex);
	data->pressure->pv  = val;
	pthread_mutex_unlock(&data->pressure->pressureMutex);
}

float getMotionPos() {
	pthread_mutex_lock(&data->motion->motionMutex);
	float val = data->motion->pos;
	pthread_mutex_unlock(&data->motion->motionMutex);
	return val;
}

void setMotionPos(float val) {
	pthread_mutex_lock(&data->motion->motionMutex);
	data->motion->pos  = val;
	pthread_mutex_unlock(&data->motion->motionMutex);
}

float getMotionVel() {
	pthread_mutex_lock(&data->motion->motionMutex);
	float val = data->motion->vel;
	pthread_mutex_unlock(&data->motion->motionMutex);
	return val;
}

void setMotionVel(float val) {
	pthread_mutex_lock(&data->motion->motionMutex);
	data->motion->vel  = val;
	pthread_mutex_unlock(&data->motion->motionMutex);
}

float getMotionAccel() {
	pthread_mutex_lock(&data->motion->motionMutex);
	float val = data->motion->accel;
	pthread_mutex_unlock(&data->motion->motionMutex);
	return val;
}

void setMotionAccel(float val) {
	pthread_mutex_lock(&data->motion->motionMutex);
	data->motion->accel  = val;
	pthread_mutex_unlock(&data->motion->motionMutex);
}

int getMotionRetroCount() {
	pthread_mutex_lock(&data->motion->motionMutex);
	int val = data->motion->retroCount;
	pthread_mutex_unlock(&data->motion->motionMutex);
	return val;
}

void setMotionRetroCount(int val) {
	pthread_mutex_lock(&data->motion->motionMutex);
	data->motion->retroCount  = val;
	pthread_mutex_unlock(&data->motion->motionMutex);
}

int getMotionMissedRetro() {
	pthread_mutex_lock(&data->motion->motionMutex);
	int val = data->motion->missedRetro;
	pthread_mutex_unlock(&data->motion->motionMutex);
	return val;
}

void setMotionMissedRetro(int val) {
	pthread_mutex_lock(&data->motion->motionMutex);
	data->motion->missedRetro  = val;
	pthread_mutex_unlock(&data->motion->motionMutex);
}

float getBmsPackCurrent() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	float val = data->bms->packCurrent;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsPackCurrent(float val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->packCurrent  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

float getBmsPackVoltage() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	float val = data->bms->packVoltage;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsPackVoltage(float val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->packVoltage  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

int getBmsImdStatus() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	int val = data->bms->imdStatus;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsImdStatus(int val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->imdStatus  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

uint16_t getBmsPackDCL() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	uint16_t val = data->bms->packDCL;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsPackDCL(uint16_t val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->packDCL  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

int16_t getBmsPackCCL() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	int16_t val = data->bms->packCCL;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsPackCCL(int16_t val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->packCCL  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

uint16_t getBmsPackResistance() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	uint16_t val = data->bms->packResistance;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsPackResistance(uint16_t val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->packResistance  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

uint8_t getBmsPackHealth() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	uint8_t val = data->bms->packHealth;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsPackHealth(uint8_t val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->packHealth  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

float getBmsPackOpenVoltage() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	float val = data->bms->packOpenVoltage;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsPackOpenVoltage(float val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->packOpenVoltage  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

uint16_t getBmsPackCycles() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	uint16_t val = data->bms->packCycles;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsPackCycles(uint16_t val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->packCycles  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

uint16_t getBmsPackAh() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	uint16_t val = data->bms->packAh;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsPackAh(uint16_t val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->packAh  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

float getBmsInputVoltage() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	float val = data->bms->inputVoltage;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsInputVoltage(float val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->inputVoltage  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

uint8_t getBmsSoc() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	uint8_t val = data->bms->Soc;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsSoc(uint8_t val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->Soc  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

uint16_t getBmsRelayStatus() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	uint16_t val = data->bms->relayStatus;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsRelayStatus(uint16_t val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->relayStatus  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

uint8_t getBmsHighTemp() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	uint8_t val = data->bms->highTemp;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsHighTemp(uint8_t val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->highTemp  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

uint8_t getBmsLowTemp() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	uint8_t val = data->bms->lowTemp;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsLowTemp(uint8_t val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->lowTemp  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

uint8_t getBmsAvgTemp() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	uint8_t val = data->bms->avgTemp;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsAvgTemp(uint8_t val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->avgTemp  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

float getBmsCellMaxVoltage() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	float val = data->bms->cellMaxVoltage;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsCellMaxVoltage(float val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->cellMaxVoltage  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

float getBmsCellMinVoltage() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	float val = data->bms->cellMinVoltage;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsCellMinVoltage(float val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->cellMinVoltage  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

uint16_t getBmsCellAvgVoltage() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	uint16_t val = data->bms->cellAvgVoltage;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsCellAvgVoltage(uint16_t val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->cellAvgVoltage  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

uint8_t getBmsMaxCells() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	uint8_t val = data->bms->maxCells;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsMaxCells(uint8_t val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->maxCells  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

uint8_t getBmsNumCells() {
	pthread_mutex_lock(&data->bms->bmsMutex);
	uint8_t val = data->bms->numCells;
	pthread_mutex_unlock(&data->bms->bmsMutex);
	return val;
}

void setBmsNumCells(uint8_t val) {
	pthread_mutex_lock(&data->bms->bmsMutex);
	data->bms->numCells  = val;
	pthread_mutex_unlock(&data->bms->bmsMutex);
}

uint16_t getRmsIgbtTemp() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	uint16_t val = data->rms->igbtTemp;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsIgbtTemp(uint16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->igbtTemp  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

uint16_t getRmsGateDriverBoardTemp() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	uint16_t val = data->rms->gateDriverBoardTemp;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsGateDriverBoardTemp(uint16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->gateDriverBoardTemp  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

uint16_t getRmsControlBoardTemp() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	uint16_t val = data->rms->controlBoardTemp;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsControlBoardTemp(uint16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->controlBoardTemp  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

uint16_t getRmsMotorTemp() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	uint16_t val = data->rms->motorTemp;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsMotorTemp(uint16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->motorTemp  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

int16_t getRmsMotorSpeed() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	int16_t val = data->rms->motorSpeed;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsMotorSpeed(int16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->motorSpeed  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

int16_t getRmsPhaseACurrent() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	int16_t val = data->rms->phaseACurrent;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsPhaseACurrent(int16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->phaseACurrent  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

uint16_t getRmsPhaseBCurrent() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	uint16_t val = data->rms->phaseBCurrent;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsPhaseBCurrent(uint16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->phaseBCurrent  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

uint16_t getRmsPhaseCCurrent() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	uint16_t val = data->rms->phaseCCurrent;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsPhaseCCurrent(uint16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->phaseCCurrent  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

int16_t getRmsDcBusVoltage() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	int16_t val = data->rms->dcBusVoltage;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsDcBusVoltage(int16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->dcBusVoltage  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

uint16_t getRmsLvVoltage() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	uint16_t val = data->rms->lvVoltage;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsLvVoltage(uint16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->lvVoltage  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

uint64_t getRmsCanCode1() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	uint64_t val = data->rms->canCode1;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsCanCode1(uint64_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->canCode1  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

uint64_t getRmsCanCode2() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	uint64_t val = data->rms->canCode2;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsCanCode2(uint64_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->canCode2  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

uint64_t getRmsFaultCode1() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	uint64_t val = data->rms->faultCode1;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsFaultCode1(uint64_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->faultCode1  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

uint64_t getRmsFaultCode2() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	uint64_t val = data->rms->faultCode2;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsFaultCode2(uint64_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->faultCode2  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

int16_t getRmsCommandedTorque() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	int16_t val = data->rms->commandedTorque;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsCommandedTorque(int16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->commandedTorque  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

int16_t getRmsActualTorque() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	int16_t val = data->rms->actualTorque;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsActualTorque(int16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->actualTorque  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

uint16_t getRmsRelayState() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	uint16_t val = data->rms->relayState;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsRelayState(uint16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->relayState  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

uint16_t getRmsElectricalFreq() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	uint16_t val = data->rms->electricalFreq;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsElectricalFreq(uint16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->electricalFreq  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

int16_t getRmsDcBusCurrent() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	int16_t val = data->rms->dcBusCurrent;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsDcBusCurrent(int16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->dcBusCurrent  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

uint16_t getRmsOutputVoltageLn() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	uint16_t val = data->rms->outputVoltageLn;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsOutputVoltageLn(uint16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->outputVoltageLn  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

uint16_t getRmsVSMCode() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	uint16_t val = data->rms->VSMCode;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsVSMCode(uint16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->VSMCode  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

uint16_t getRmsKeyMode() {
	pthread_mutex_lock(&data->rms->rmsMutex);
	uint16_t val = data->rms->keyMode;
	pthread_mutex_unlock(&data->rms->rmsMutex);
	return val;
}

void setRmsKeyMode(uint16_t val) {
	pthread_mutex_lock(&data->rms->rmsMutex);
	data->rms->keyMode  = val;
	pthread_mutex_unlock(&data->rms->rmsMutex);
}

int getFlagsReadyPump() {
	pthread_mutex_lock(&data->flags->flagsMutex);
	int val = data->flags->readyPump;
	pthread_mutex_unlock(&data->flags->flagsMutex);
	return val;
}

void setFlagsReadyPump(int val) {
	pthread_mutex_lock(&data->flags->flagsMutex);
	data->flags->readyPump  = val;
	pthread_mutex_unlock(&data->flags->flagsMutex);
}

int getFlagsPumpDown() {
	pthread_mutex_lock(&data->flags->flagsMutex);
	int val = data->flags->pumpDown;
	pthread_mutex_unlock(&data->flags->flagsMutex);
	return val;
}

void setFlagsPumpDown(int val) {
	pthread_mutex_lock(&data->flags->flagsMutex);
	data->flags->pumpDown  = val;
	pthread_mutex_unlock(&data->flags->flagsMutex);
}

int getFlagsReadyCommand() {
	pthread_mutex_lock(&data->flags->flagsMutex);
	int val = data->flags->readyCommand;
	pthread_mutex_unlock(&data->flags->flagsMutex);
	return val;
}

void setFlagsReadyCommand(int val) {
	pthread_mutex_lock(&data->flags->flagsMutex);
	data->flags->readyCommand  = val;
	pthread_mutex_unlock(&data->flags->flagsMutex);
}

bool getFlagsReadyToBrake() {
	pthread_mutex_lock(&data->flags->flagsMutex);
	bool val = data->flags->readyToBrake;
	pthread_mutex_unlock(&data->flags->flagsMutex);
	return val;
}

void setFlagsReadyToBrake(bool val) {
	pthread_mutex_lock(&data->flags->flagsMutex);
	data->flags->readyToBrake  = val;
	pthread_mutex_unlock(&data->flags->flagsMutex);
}

int getFlagsPropulse() {
	pthread_mutex_lock(&data->flags->flagsMutex);
	int val = data->flags->propulse;
	pthread_mutex_unlock(&data->flags->flagsMutex);
	return val;
}

void setFlagsPropulse(int val) {
	pthread_mutex_lock(&data->flags->flagsMutex);
	data->flags->propulse  = val;
	pthread_mutex_unlock(&data->flags->flagsMutex);
}

int getFlagsEmergencyBrake() {
	pthread_mutex_lock(&data->flags->flagsMutex);
	int val = data->flags->emergencyBrake;
	pthread_mutex_unlock(&data->flags->flagsMutex);
	return val;
}

void setFlagsEmergencyBrake(int val) {
	pthread_mutex_lock(&data->flags->flagsMutex);
	data->flags->emergencyBrake  = val;
	pthread_mutex_unlock(&data->flags->flagsMutex);
}

int getFlagsShouldStop() {
	pthread_mutex_lock(&data->flags->flagsMutex);
	int val = data->flags->shouldStop;
	pthread_mutex_unlock(&data->flags->flagsMutex);
	return val;
}

void setFlagsShouldStop(int val) {
	pthread_mutex_lock(&data->flags->flagsMutex);
	data->flags->shouldStop  = val;
	pthread_mutex_unlock(&data->flags->flagsMutex);
}

int getFlagsShutdown() {
	pthread_mutex_lock(&data->flags->flagsMutex);
	int val = data->flags->shutdown;
	pthread_mutex_unlock(&data->flags->flagsMutex);
	return val;
}

void setFlagsShutdown(int val) {
	pthread_mutex_lock(&data->flags->flagsMutex);
	data->flags->shutdown  = val;
	pthread_mutex_unlock(&data->flags->flagsMutex);
}

bool getFlagsShouldBrake() {
	pthread_mutex_lock(&data->flags->flagsMutex);
	bool val = data->flags->shouldBrake;
	pthread_mutex_unlock(&data->flags->flagsMutex);
	return val;
}

void setFlagsShouldBrake(bool val) {
	pthread_mutex_lock(&data->flags->flagsMutex);
	data->flags->shouldBrake  = val;
	pthread_mutex_unlock(&data->flags->flagsMutex);
}

bool getFlagsIsConnected() {
	pthread_mutex_lock(&data->flags->flagsMutex);
	bool val = data->flags->isConnected;
	pthread_mutex_unlock(&data->flags->flagsMutex);
	return val;
}

void setFlagsIsConnected(bool val) {
	pthread_mutex_lock(&data->flags->flagsMutex);
	data->flags->isConnected  = val;
	pthread_mutex_unlock(&data->flags->flagsMutex);
}

bool getFlagsBrakeInit() {
	pthread_mutex_lock(&data->flags->flagsMutex);
	bool val = data->flags->brakeInit;
	pthread_mutex_unlock(&data->flags->flagsMutex);
	return val;
}

void setFlagsBrakeInit(bool val) {
	pthread_mutex_lock(&data->flags->flagsMutex);
	data->flags->brakeInit  = val;
	pthread_mutex_unlock(&data->flags->flagsMutex);
}

bool getFlagsBrakePrimAct() {
	pthread_mutex_lock(&data->flags->flagsMutex);
	bool val = data->flags->brakePrimAct;
	pthread_mutex_unlock(&data->flags->flagsMutex);
	return val;
}

void setFlagsBrakePrimAct(bool val) {
	pthread_mutex_lock(&data->flags->flagsMutex);
	data->flags->brakePrimAct  = val;
	pthread_mutex_unlock(&data->flags->flagsMutex);
}

bool getFlagsBrakeSecAct() {
	pthread_mutex_lock(&data->flags->flagsMutex);
	bool val = data->flags->brakeSecAct;
	pthread_mutex_unlock(&data->flags->flagsMutex);
	return val;
}

void setFlagsBrakeSecAct(bool val) {
	pthread_mutex_lock(&data->flags->flagsMutex);
	data->flags->brakeSecAct  = val;
	pthread_mutex_unlock(&data->flags->flagsMutex);
}

bool getFlagsBrakePrimRetr() {
	pthread_mutex_lock(&data->flags->flagsMutex);
	bool val = data->flags->brakePrimRetr;
	pthread_mutex_unlock(&data->flags->flagsMutex);
	return val;
}

void setFlagsBrakePrimRetr(bool val) {
	pthread_mutex_lock(&data->flags->flagsMutex);
	data->flags->brakePrimRetr  = val;
	pthread_mutex_unlock(&data->flags->flagsMutex);
}

bool getFlagsBrakeSecRetr() {
	pthread_mutex_lock(&data->flags->flagsMutex);
	bool val = data->flags->brakeSecRetr;
	pthread_mutex_unlock(&data->flags->flagsMutex);
	return val;
}

void setFlagsBrakeSecRetr(bool val) {
	pthread_mutex_lock(&data->flags->flagsMutex);
	data->flags->brakeSecRetr  = val;
	pthread_mutex_unlock(&data->flags->flagsMutex);
}

bool getFlagsClrMotionData() {
	pthread_mutex_lock(&data->flags->flagsMutex);
	bool val = data->flags->clrMotionData;
	pthread_mutex_unlock(&data->flags->flagsMutex);
	return val;
}

void setFlagsClrMotionData(bool val) {
	pthread_mutex_lock(&data->flags->flagsMutex);
	data->flags->clrMotionData  = val;
	pthread_mutex_unlock(&data->flags->flagsMutex);
}

uint64_t getTimersStartTime() {
	pthread_mutex_lock(&data->timers->timersMutex);
	uint64_t val = data->timers->startTime;
	pthread_mutex_unlock(&data->timers->timersMutex);
	return val;
}

void setTimersStartTime(uint64_t val) {
	pthread_mutex_lock(&data->timers->timersMutex);
	data->timers->startTime  = val;
	pthread_mutex_unlock(&data->timers->timersMutex);
}

uint64_t getTimersOldRetro() {
	pthread_mutex_lock(&data->timers->timersMutex);
	uint64_t val = data->timers->oldRetro;
	pthread_mutex_unlock(&data->timers->timersMutex);
	return val;
}

void setTimersOldRetro(uint64_t val) {
	pthread_mutex_lock(&data->timers->timersMutex);
	data->timers->oldRetro  = val;
	pthread_mutex_unlock(&data->timers->timersMutex);
}

uint64_t getTimersLastRetro() {
	pthread_mutex_lock(&data->timers->timersMutex);
	uint64_t val = data->timers->lastRetro;
	pthread_mutex_unlock(&data->timers->timersMutex);
	return val;
}

void setTimersLastRetro(uint64_t val) {
	pthread_mutex_lock(&data->timers->timersMutex);
	data->timers->lastRetro  = val;
	pthread_mutex_unlock(&data->timers->timersMutex);
}

uint64_t getTimersLastRetros(int index) {
	pthread_mutex_lock(&data->timers->timersMutex);
	uint64_t val = data->timers->lastRetros[index];
	pthread_mutex_unlock(&data->timers->timersMutex);
	return val;
}

void setTimersLastRetros(uint64_t val, int index) {
	pthread_mutex_lock(&data->timers->timersMutex);
	data->timers->lastRetros[index]  = val;
	pthread_mutex_unlock(&data->timers->timersMutex);
}

uint64_t getTimersCrawlTimer() {
	pthread_mutex_lock(&data->timers->timersMutex);
	uint64_t val = data->timers->crawlTimer;
	pthread_mutex_unlock(&data->timers->timersMutex);
	return val;
}

void setTimersCrawlTimer(uint64_t val) {
	pthread_mutex_lock(&data->timers->timersMutex);
	data->timers->crawlTimer  = val;
	pthread_mutex_unlock(&data->timers->timersMutex);
}
/* Autogenerated Code Ends */
