/*
 * waterLevel.cpp
 */

#include "waterLevel.h"

/* set process */
void WaterLevel::setProcess(Process *process)
{
	process_ = process;
}
/* set value parameter */
void WaterLevel::setValue(int value)
{
	value_ = value;
}
/* operation to be performed */
void WaterLevel::execute()
{
	process_->incrementWaterLevel(value_);
}
