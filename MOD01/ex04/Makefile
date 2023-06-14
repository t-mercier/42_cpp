# Variables
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
TARGET = out
SRC = $(wildcard *.cpp)
OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

# Rules
all: $(TARGET)

test: 
	./out test.txt "C++" MUCHACHO

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean fclean re

re: fclean all

clean:
	rm -rf $(OBJ_DIR)
	rm -rf *.replace

fclean: clean
	rm -f $(TARGET)
