# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/22 19:39:52 by hben-laz          #+#    #+#              #
#    Updated: 2024/12/22 19:39:52 by hben-laz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CC =  c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 

RM = rm -f

SRC =  main.cpp Phonebook.cpp Contact.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Phonebook.hpp Contact.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
