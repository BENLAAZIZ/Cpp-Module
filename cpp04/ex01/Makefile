# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/27 02:24:59 by hben-laz          #+#    #+#              #
#    Updated: 2025/01/07 01:17:59 by hben-laz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

CPP = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

rm = rm -f

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp  Brain.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Animal.hpp Dog.hpp Cat.hpp  Brain.hpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	$(rm) $(OBJ)

fclean: clean
	$(rm) $(NAME)
	
re: fclean all

.PHONY: clean