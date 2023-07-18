# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/30 13:34:32 by kbolon            #+#    #+#              #
#    Updated: 2023/06/15 15:02:25 by kbolon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_helper.c 
	
CC = cc
OBJ = ${SRC:.c=.o} 
CFLAGS = -c -Wall -Werror -Wextra

all:	${NAME} 

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean: 
	rm -f ${OBJ}

fclean: clean 	
	rm -f ${NAME}

re: fclean all 

.PHONY: all clean fclean 
