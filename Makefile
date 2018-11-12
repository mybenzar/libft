# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 16:20:39 by mybenzar          #+#    #+#              #
#    Updated: 2018/11/12 20:27:04 by mybenzar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

SRC = *.c

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRC) libft.h
	@ar rc libft.a *.o

clean:
	@rm -rf *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
