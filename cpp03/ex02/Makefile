# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/29 19:37:08 by hben-laz          #+#    #+#              #
#    Updated: 2024/12/01 00:15:42 by hben-laz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ex02

CC = g++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

rm = rm -f

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp ClapTrap.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(rm) $(OBJ)

fclean: clean

re: fclean all

.PHONY: all clean fclean re

	