/*
 * main.cpp
 */
 #include <cstdio>
 
 #include "waterLevel.h"
 #include "temperatureLevel.h"
 #include "pressureLevel.h"
 #include "controller.h"
 
 
 int main() {
	 
	 /* water level, pressure level and temperature level values to be manipulated by process */
	 int wLevel = 0, pLevel = 0, tLevel = 0;
	 
	 /* process instance */
	 Process process = Process(&wLevel, &pLevel, &tLevel);
	 
	 /* change water level */
	 WaterLevel waterLevel;
	 /* set process instance */
	 waterLevel.setProcess(&process);
	 /* set value desired value to change water level */
	 waterLevel.setValue(30);
	
	 /* change presure level */
	 PressureLevel pressureLevel;
	 /* set process instance */
	 pressureLevel.setProcess(&process);
	 /* set value desired value to change pressure level */
	 pressureLevel.setValue(5);
     
	 /* change temperature level*/
	 TemperatureLevel temperatureLevel;
	 /* set process instance */
	 temperatureLevel.setProcess(&process);
     /* set value desired value to change temperature level */
	 temperatureLevel.setValue(1);
	 
	 /* controller instance to manage requests made */
	 Controller controller;
	 /* set water level request */
	 controller.setCommand(&waterLevel);
	 /* execute command */
	 controller.executeCommand();
	 
	 printf("WaterLevel: %d\n", wLevel);
	 
	 /* set pressure level request */
	 controller.setCommand(&pressureLevel);
	 /* execute command */
	 controller.executeCommand();
	 
	 printf("PressureLevel: %d\n", pLevel);
	 
	 /* set temperature level request */
	 controller.setCommand(&temperatureLevel);
	 /* execute command */
	 controller.executeCommand();
	 
	 printf("TemperatureLevel: %d\n", tLevel);
	 
	 return (0);
 
 }