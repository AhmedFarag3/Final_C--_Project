# Compiler settings
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Directories
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Find all source files and headers
SRC_FILES = $(shell find $(SRC_DIR) -name "*.cpp")
OBJ_FILES = $(SRC_FILES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
HEADER_FILES = $(shell find $(SRC_DIR) -name "*.h")

# Target executable
TARGET = $(BIN_DIR)/TLR

# Create necessary directories if they don't exist
$(shell mkdir -p $(OBJ_DIR) $(BIN_DIR))

# Default target
all: $(TARGET)

# Linking the object files into the final executable
$(TARGET): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to compile .cpp to .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADER_FILES)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean object files and the executable
clean:
	rm -rf $(OBJ_DIR)/*.o $(TARGET)

# Run the executable
run: $(TARGET)
	./$(TARGET)

# Phony targets
.PHONY: all clean run
