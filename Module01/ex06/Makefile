# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/22 23:30:09 by ael-asri          #+#    #+#              #
#    Updated: 2022/07/22 23:30:10 by ael-asri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

SRCS =  HarlFilter.cpp\
		main.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $^ -o $@

%.o : %.cpp
	@	c++ $(CFLAGS) -c $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re