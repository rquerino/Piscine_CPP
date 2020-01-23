# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/23 14:59:50 by rquerino          #+#    #+#              #
#    Updated: 2020/01/23 15:00:04 by rquerino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

CFLAGS = -Wall -Werror -Wextra

FILES = main.cpp

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