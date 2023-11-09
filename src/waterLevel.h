/*
 * waterLevel.h
 */

#ifndef WATERLEVEL_H
#define WATERLEVEL_H

#include "command.h"
#include "process.h"

class WaterLevel : public Command
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
#endif // WATERLEVEL_H
