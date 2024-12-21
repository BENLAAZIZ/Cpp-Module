# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/29 19:37:08 by hben-laz          #+#    #+#              #
#    Updated: 2024/12/21 23:22:40 by hben-laz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

CC = c++

CPPFLAGS = -Wall -Wextra -Werror  -std=c++98

rm = rm -f

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(rm) $(OBJ)

fclean: clean
	$(rm) $(NAME)

re: fclean all

.PHONY: all clean fclean re

	