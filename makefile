# the compiler: gcc for C program, define as g++ for C++
CC = gcc

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall

# the build target executable:
TARGET = parallel-sort-int

OUT_DIR=build

all: build run

build: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(OUT_DIR)/$(TARGET) $(TARGET).c

run:
	$(OUT_DIR)/$(TARGET)

clean:
	$(RM) $(TARGET)

$(shell mkdir -p $(OUT_DIR))
