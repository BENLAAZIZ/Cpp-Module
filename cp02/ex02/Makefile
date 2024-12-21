NAME = ex02

CC = c++ 

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRC = main.cpp Fixed.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Fixed.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
