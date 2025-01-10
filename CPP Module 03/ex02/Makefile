# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/30 19:47:03 by hben-laz          #+#    #+#              #
#    Updated: 2025/01/05 13:00:33 by hben-laz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

rm = rm -f

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	$(rm) $(OBJ)

fclean: clean
	$(rm) $(NAME)

re: fclean all

.PHONY: clean

	