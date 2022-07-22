# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-asri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 19:28:59 by ael-asri          #+#    #+#              #
#    Updated: 2022/07/05 19:29:00 by ael-asri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS =  Contact.cpp\
		PhoneBook.cpp\
		main.cpp

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
		c++ $(CFLAGS) $^ -o $@

%.o : %.cpp
	@	c++ $(CFLAGS) -c $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re