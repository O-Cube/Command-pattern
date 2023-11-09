/*
 * main_test.cpp
 */
 
 #include "gtest/gtest.h"
 #include "gmock/gmock.h"
 
 #include "waterLevel.h"
 #include "temperatureLevel.h"
 #include "pressureLevel.h"
 #include "controller.h"
 
class CommandPattern : public testing::Test
{
protected:
	/* test setup */
	void SetUp() override
	{
		/* process intance to perform value manipulation */
		process_ = new Process(&wLevel_, &pLevel_, &tLevel_);
	}
	/* water level, pressure level and temperature level values to be manipulated and tested */
	int wLevel_ = 0;
	int pLevel_= 0;
	int tLevel_ = 0;
	/* process intance to perform value manipulation */
	Process *process_;
	/* Command instances */
	WaterLevel waterLevel_;
	PressureLevel pressureLevel_;
	TemperatureLevel temperatureLevel_;
	/* controller instance to act as intermediary between commands and process */
	Controller controller_;
};

/* test water level, pressure level and temperature level wihtout any change in their values */
TEST_F(CommandPattern, ZeroValueTest)
{
	EXPECT_EQ(0, wLevel_); // water level
	EXPECT_EQ(0, pLevel_); // pressure level
	EXPECT_EQ(0, tLevel_); // temperature level
}

/* change water level and perform test */
TEST_F(CommandPattern, WaterLevelTest)
{
	/* set process to water level instance */
	waterLevel_.setProcess(process_);
	/* set desire value to change water level */
	waterLevel_.setValue(-25);
	/* add water level instance into controller instance */
	controller_.setCommand(&waterLevel_);
	/* execute water level instance command */
	controller_.executeCommand();
	/* test changes in all three levels */
	EXPECT_EQ(-25, wLevel_); // water level
	EXPECT_EQ(0, pLevel_);   // pressure level
	EXPECT_EQ(0, tLevel_);   // temperature level
}


/* change pressure level and perform test */
TEST_F(CommandPattern, PressureLevelTest)
{
	/* set process to pressure level instance */
	pressureLevel_.setProcess(process_);
	/* set desire value to change pressure level */
	pressureLevel_.setValue(10);
	/* add pressure level instance into controller instance */
	controller_.setCommand(&pressureLevel_);
	/* execute pressure level instance command */
	controller_.executeCommand();
	/* test changes in all three levels */
	EXPECT_EQ(0, wLevel_);  // water level
	EXPECT_EQ(10, pLevel_); // pressure level
	EXPECT_EQ(0, tLevel_);  // temperature level
}


/* change temperature level and perform test */
TEST_F(CommandPattern, TemperatureLevelTest)
{
	/* set process to temoerature level instance */
	temperatureLevel_.setProcess(process_);
	/* set desire value to change temperature level */
	temperatureLevel_.setValue(5);
	/* add temperature level instance into controller instance */
	controller_.setCommand(&temperatureLevel_);
	/* execute temperature level instance command */
	controller_.executeCommand();
	/* test changes in all three levels */
	EXPECT_EQ(0, wLevel_); // water level
	EXPECT_EQ(0, pLevel_); // pressure level
	EXPECT_EQ(5, tLevel_); // temperature level
}