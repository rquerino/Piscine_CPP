# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rquerino <rquerino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/13 15:04:37 by rquerino          #+#    #+#              #
#    Updated: 2020/01/13 16:03:09 by rquerino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CFLAGS = -Wall -Werror -Wextra

FILES = megaphone.cpp
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