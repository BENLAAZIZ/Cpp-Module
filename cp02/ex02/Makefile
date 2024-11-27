NAME = ex02

CC = g++ -std=c++98

FLAGS = -Wall -Wextra -Werror

RM = rm -f

SRC = main.cpp Fixed.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) Fixed.hpp
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp %.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean

re: fclean all


.PHONY: all clean fclean re
