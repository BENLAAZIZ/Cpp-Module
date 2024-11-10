NAME = ex01

CC =  c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

RM = rm -f

SRC =  main.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) Phonebook.hpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
