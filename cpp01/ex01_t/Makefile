# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 18:07:42 by hben-laz          #+#    #+#              #
#    Updated: 2024/11/14 21:36:47 by hben-laz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

CC =  c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

RM = rm -f

SRC =  main.cpp Zombie.cpp zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)