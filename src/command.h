/* 
 * command.h
 */
 
 #ifndef COMMAND_H
 #define COMMAND_H
 
/* servers as interface to command classes */
class Command
{
public:
	virtual void execute() = 0;
};
 #endif  // COMMAND_H