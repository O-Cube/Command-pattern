/*
 * temperatureLevel.h
 */

#ifndef TEMPERATURELEVEL_H
#define TEMPERATURELEVEL_H

#include "command.h"
#include "process.h"

class TemperatureLevel : public Command
{

public:
	/* set process */
	void setProcess(Process *process);
	/* set value parameter */
	void setValue(int value);
	/* operation to be performed */
	void execute() override;

private:
	Process *process_;
	int value_;
};
#endif // TEMPERATURELEVEL_H