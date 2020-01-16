# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/15 18:05:19 by rquerino          #+#    #+#              #
#    Updated: 2020/01/15 18:28:39 by rquerino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CFLAGS = -Wall -Werror -Wextra

FILES = replace.cpp

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