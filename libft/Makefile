# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbolon <kbolon@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 16:52:15 by kbolon            #+#    #+#              #
#    Updated: 2023/05/16 12:56:17 by kbolon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c

CC = cc
OBJ = ${SRC:.c=.o} 
CFLAGS = -c -Wall -Werror -Wextra

all:	${NAME} 

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

#%.o: %.c
#	${CC} ${CFLAGS} -c $< -o $@

clean: 
	rm -f ${OBJ} ${NAME}

fclean: clean 	
	rm -f ${NAME}
	rm -f ${OBJ}

re: fclean all 

.PHONY: all clean fclean 

so:
	${CC} -nostartfiles -fPIC ${CFLAGS} ${SRC}
	gcc -nostartfiles -shared -o libft.so ${OBJ}