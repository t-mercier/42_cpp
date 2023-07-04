# Variables
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = out
SRC = $(wildcard *.cpp)
OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

# Rules
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean fclean re

re: fclean all

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(TARGET)	