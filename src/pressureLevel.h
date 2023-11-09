/*
 * pressureLevel.h
 */

#ifndef PRESSURELEVEL_H
#define PRESSURELEVEL_H

#include "command.h"
#include "process.h"

class PressureLevel : public Command
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
#endif // PRESSURELEVEL_H