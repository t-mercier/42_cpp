# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = ☎️ 
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

# Rules
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean fclean re

re: fclean all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)	