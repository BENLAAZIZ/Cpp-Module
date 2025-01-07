NAME= inheritance
CPP= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98

OBJ= $(SSRC= main.cpp ClapTrap.cppRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ) 
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp ClapTrap.hpp 
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean