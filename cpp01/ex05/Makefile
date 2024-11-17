# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/17 00:19:59 by hben-laz          #+#    #+#              #
#    Updated: 2024/11/17 01:52:52 by hben-laz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex05

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRC =  main.cpp Harl.cpp


OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re