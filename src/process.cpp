/*
 * process.cpp
 */
 
 #include "process.h"
 
    /* creates a process object with with pointers to water level, pressure level and temperature level */
	Process::Process(int *waterLevel, int *pressureLevel, int *temperatureLevel) \
	                 : waterLevel_(waterLevel), pressureLevel_(pressureLevel), temperatureLevel_(temperatureLevel) { }
	                 
	/* increase water level by value */
	void Process::incrementWaterLevel(int value) {
		*waterLevel_ += value;
	}
	/* increase pressure level by value */
	void Process::incrementPressureLevel(int value) {
		*pressureLevel_ += value;
	}
	/* increase temperature level by value */
	void Process::incrementTemperatureLevel(int value) {
		*temperatureLevel_ += value;
	}