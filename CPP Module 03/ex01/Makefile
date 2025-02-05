# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/30 19:46:05 by hben-laz          #+#    #+#              #
#    Updated: 2025/01/01 17:59:03 by hben-laz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ex01

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror  -std=c++98

rm = rm -f

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(rm) $(OBJ)

fclean: clean
	$(rm) $(NAME)

re: fclean all

.PHONY: clean

	