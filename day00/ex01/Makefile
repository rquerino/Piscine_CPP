# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/13 15:04:37 by rquerino          #+#    #+#              #
#    Updated: 2020/01/14 20:43:45 by rquerino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 42phonebook

CFLAGS = -Wall -Werror -Wextra

FILES = Contact.class.cpp \
		phonebook.cpp

OBJ =	$(FILES:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	g++ -o $@ $^ $(CFLAGS)

%.o: %.c Makefile
	g++ $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all