/*
 * controller.h
 */
 
 #ifndef CONTROLLER_H
 #define CONTROLLER_H
 
 #include "command.h"
 
 /* acquires commands and forward command to be executed */
 
class Controller
{
public:
	/* get command */
	void setCommand(Command *command);
	/* execute command */
	void executeCommand();
private:
	Command *command_;
};
 
#endif // CONTROLLER_H