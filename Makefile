# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 16:20:39 by mybenzar          #+#    #+#              #
#    Updated: 2018/11/19 12:40:19 by mybenzar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

SRC = ft_putchar.c \
	  ft_putstr.c \
	  ft_strlen.c \
	  ft_putnbr.c \
	  ft_putendl.c \
	  ft_strdup.c \
	  ft_strcmp.c \
	  ft_strncmp.c \
	  ft_strcpy.c \
	  ft_strncpy.c \
	  ft_strclr.c \
	  ft_strstr.c \
	  ft_strnstr.c \
	  ft_strcat.c \
	  ft_strncat.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_atoi.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strequ.c \
	  ft_strnequ.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_memalloc.c \
	  ft_bzero.c \
	  ft_memset.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memdel.c \
	  ft_strnew.c \
	  ft_strdel.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strsub.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_itoa.c \
	  ft_strsplit.c \
	  ft_lstnew.c \
	  ft_lstdelone.c \
	  ft_lstdel.c \
	  ft_lstadd.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  ft_swap.c \
	  ft_strrev.c \
	  ft_sqrt.c \
	  ft_recursive_power.c \
	  ft_list_size.c \
	  ft_list_reverse.c \
	  ft_sort_integer_table.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

$(OBJ):
	@gcc $(FLAGS) -c $(SRC)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
