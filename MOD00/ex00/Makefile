# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

# Rules
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC)

.PHONY: clean fclean re

re: fclean all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)	
