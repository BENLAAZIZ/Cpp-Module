NAME = ex01

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

RM = rm -f

SRC =  m.cpp


OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
