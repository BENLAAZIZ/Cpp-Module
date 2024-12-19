NAME = megaphone

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

RM = rm -f

SRC =  megaphone.cpp


OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re