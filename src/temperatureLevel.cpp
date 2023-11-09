/*
 * temperatureLevel.cpp
 */

#include "temperatureLevel.h"

/* set process */
void TemperatureLevel::setProcess(Process *process)
{
	process_ = process;
}
/* set value parameter */
void TemperatureLevel::setValue(int value)
{
	value_ = value;
}
/* operation to be performed */
void TemperatureLevel::execute()
{
	process_->incrementTemperatureLevel(value_);
}
