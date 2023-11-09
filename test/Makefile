# source files
SRC = ../src/waterLevel.cpp\
	  ../src/temperatureLevel.cpp\
	  ../src/process.cpp\
	  ../src/pressureLevel.cpp\
      ../src/controller.cpp\
	  ./main_test.cpp
      
# include folders
IFLAGS = -I../src
# compiler
CC = g++
# executable
EXECUTABLE = command.test.out
# compiler options
CFLAGS = -Wall -g -std=c++14 -fpermissive
# remove
RM = rm
# list of objects
OBJS = $(SRC:.cpp=.o)
# test coverage flags
TESTFLAGS = -fprofile-arcs -ftest-coverage
# garbage files
GARBAGE = ./*.gcno ./*.gcda ../src/*.gcno ../src/*.gcda

Build: $(EXECUTABLE)
# build application
$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $(IFLAGS) $(TESTFLAGS) $(OBJS) -o$@ -lgtest -lgmock -lgtest_main -lpthread
# compile individual objects
%.o: %.cpp
	$(CC) $(CFLAGS) $(IFLAGS) $(TESTFLAGS) -c $< -o$@

# run application
Run: coverage-folder coverage-info

# creates directory to write coverage data
coverage-folder:
	mkdir -p output

# create coverage data and write into coverage folder
coverage-info:
	./$(EXECUTABLE)
	lcov --capture --directory ../src --output-file ./output/lcov.info
	lcov -r ./output/lcov.info '/usr/include/*' '_deps/*' '*.png' '*gtest*' --output-file ./output/lcov.info
	genhtml ./output/lcov.info --output-directory ./output
	
clean:
	$(RM) -f $(OBJS) ./$(EXECUTABLE) $(GARBAGE)
	$(RM) -rf ./output
