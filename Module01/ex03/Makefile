# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/21 19:22:52 by ael-asri          #+#    #+#              #
#    Updated: 2022/07/21 19:22:53 by ael-asri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

SRCS =  main.cpp\
		Weapon.cpp\
		HumanA.cpp\
#		HumanB.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re