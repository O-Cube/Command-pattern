#include "pressureLevel.h"

/* set process */
void PressureLevel::setProcess(Process *process)
{
	process_ = process;
}
/* set value parameter */
void PressureLevel::setValue(int value)
{
	value_ = value;
}
/* operation to be performed */
void PressureLevel::execute()
{
	process_->incrementPressureLevel(value_);
}
