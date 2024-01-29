# Makefile

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -I./include

# Source directory
SRC_DIR = src

# Include directory
INCLUDE_DIR = include

# Object directory
OBJ_DIR = obj

# Main source file
MAIN_SRC = main.cpp

# List of source files (excluding main)
SRCS = $(filter-out $(MAIN_SRC), $(wildcard $(SRC_DIR)/*.cpp))

# List of object files
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

# Target executable
TARGET = main

# Default target
all: $(TARGET)

# Linking rule
$(TARGET): $(OBJS) $(MAIN_SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Compilation rule for source files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -rf $(OBJ_DIR) $(TARGET)

.PHONY: all clean
