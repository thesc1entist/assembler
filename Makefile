CXX = g++
CXXFLAGS = #-Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address
LDFLAGS =  #-fsanitize=address

SRC = *.cpp
OBJ = $(SRC:.cc=.o)
EXEC = main

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm $(EXEC)