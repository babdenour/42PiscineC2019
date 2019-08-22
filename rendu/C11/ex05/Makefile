# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abbensou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/22 01:03:58 by abbensou          #+#    #+#              #
#    Updated: 2019/08/22 01:11:15 by abbensou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=		srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS	=		${SRCS:.c=.o}

NAME	=		libft.a

CC		=		gcc

CFLAGS	=		-Wall -Wextra -Werror -Iincludes

RM		=		rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
