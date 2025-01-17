# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/10 04:00:52 by hben-laz          #+#    #+#              #
#    Updated: 2025/01/17 17:59:17 by hben-laz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRCS = main.cpp Bureaucrat.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)


$(NAME): $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean