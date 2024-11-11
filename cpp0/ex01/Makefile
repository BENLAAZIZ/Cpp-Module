NAME = ex01

CC =  c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

RM = rm -f

SRC =  main.cpp Phonebook.cpp Contact.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) Phonebook.hpp contact.hpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
