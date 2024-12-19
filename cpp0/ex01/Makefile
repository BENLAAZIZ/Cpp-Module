# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 19:21:44 by hben-laz          #+#    #+#              #
#    Updated: 2024/12/19 19:21:44 by hben-laz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

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
