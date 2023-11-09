/*
 * process.h
 */

#ifndef PROCESS_H
#define PROCESS_H

class Process
{
public:
	Process(int *waterLevel, int *pressureLevel, int *temperatureLevel);
	/* increase water level by value */
	void incrementWaterLevel(int value);
	/* increase pressure level by value */
	void incrementPressureLevel(int value);
	/* increase temperature level by value */
	void incrementTemperatureLevel(int value);

private:
	/* water level */
	int *waterLevel_;
	/* pressure level */
	int *pressureLevel_;
	/* temperature level */
	int *temperatureLevel_;
};

#endif // PROCESS_H
