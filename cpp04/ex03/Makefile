# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/04 00:05:36 by hben-laz          #+#    #+#              #
#    Updated: 2025/01/04 01:38:29 by hben-laz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = AMateria

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror

rm = rm -f

SRC = AMateria.cpp main.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(Name)

clean:
	$(rm) $(OBJ)

fclean: clean
	$(rm) $(Name)

re: fclean all

.PHONY: clean