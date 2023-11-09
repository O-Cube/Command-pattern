/*
 * controller.cpp
 */
 
 #include "controller.h"
 
/* get command */
void Controller::setCommand(Command *command)
{
	command_ = command;
}
/* execute command */
void Controller::executeCommand()
{
	command_->execute();
}
