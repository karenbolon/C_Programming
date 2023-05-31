# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/30 13:34:32 by kbolon            #+#    #+#              #
#    Updated: 2023/05/31 12:20:35 by kbolon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \


B_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \

CC = cc
OBJ = ${SRC:.c=.o} 
B_OBJ = ${B_SRC:.c=.o}
CFLAGS = -c -Wall -Werror -Wextra

all:	${NAME} 

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

bonus: ${NAME} ${B_OBJ}
	ar rcs ${NAME} ${B_OBJ}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean: 
	rm -f ${OBJ} ${B_OBJ}
#	rm -f ${OBJ} ${NAME}
#	rm -f ${B_OBJ} ${NAME}

fclean: clean 	
	rm -f ${NAME}
#	rm -f ${OBJ}
#	rm -f ${B_OBJ}

re: fclean all 

.PHONY: all clean fclean 

#so:
#	${CC} -nostartfiles -fPIC ${CFLAGS} ${SRC}
#	gcc -nostartfiles -shared -o libft.so ${OBJ}