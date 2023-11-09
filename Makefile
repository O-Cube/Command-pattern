# source files
SRC = $(wildcard ./src/*.cpp)
# include folders
IFLAGS = -I./src
# compiler
CC = g++
# executable
EXECUTABLE = observer.out
# compiler options
CFLAGS = -Wall -g -std=c++14 -fpermissive
# remove
RM = rm
# list of objects
OBJS = $(SRC:.cpp=.o)

Build: $(EXECUTABLE)
# build application
$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $(IFLAGS) $(OBJS) -o$@
# compile individual objects
%.o: %.cpp
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o$@

# run application
Run:
	./$(EXECUTABLE)
	
clean:
	$(RM) -f $(OBJS) ./$(EXECUTABLE)