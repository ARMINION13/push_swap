# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgirondo <rgirondo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/13 15:23:37 by rgirondo          #+#    #+#              #
#    Updated: 2021/10/30 20:09:41 by rgirondo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=push_swap

BONUS_NAME=checker

CC=gcc

CFLAGS=-Wall -Wextra -Werror

HEADER=./src/push_swap.h ./ft_printf/ft_printf.h ./gnl/get_next_line.h

RM=rm -f

BONUS= ./checker_src/checker.c ./src/ft_split.c ./src/push.c\
	 	./src/reverse_rotate.c ./src/rotate.c ./src/swap.c ./src/utils.c\
	 	./src/utils2.c ./src/ft_simplify.c ./src/radix_sort.c\
	 	./src/simple_sort.c ./src/errors.c ./src/simple_utils.c \
	 	./gnl/get_next_line.c ./gnl/get_next_line_utils.c

SRC= ./src/push_swap.c ./src/ft_split.c ./src/push.c\
	 ./src/reverse_rotate.c ./src/rotate.c ./src/swap.c ./src/utils.c\
	 ./src/utils2.c ./src/ft_simplify.c ./src/radix_sort.c\
	 ./src/simple_sort.c ./src/errors.c ./src/simple_utils.c \
	 ./gnl/get_next_line.c ./gnl/get_next_line_utils.c

OBJ=$(SRC:%.c=%.o)

BONUS_OBJ=$(BONUS:%.c=%.o)

all:$(NAME)

$(NAME): $(OBJ) $(HEADER)
		cd ./ft_printf/ && make
		$(CC) $(CFLAGS) -L ./ft_printf/ -lftprintf\
		-o $(NAME) $(OBJ)

bonus:	all $(BONUS_OBJ) $(HEADER)
		$(CC) $(CFLAGS) -L ./ft_printf/ -lftprintf\
		-o $(BONUS_NAME) $(BONUS_OBJ)
		
clean:
		cd ./ft_printf/ && make fclean
		$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
		$(RM)
		rm $(NAME) $(BONUS_NAME)

re: fclean all

.PHONY: all clean fclean re
