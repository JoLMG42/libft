# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtaravel <jtaravel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 15:13:33 by jtaravel          #+#    #+#              #
#    Updated: 2021/11/24 16:47:51 by jtaravel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
	ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
	ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
	ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c \
	ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
	ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
	ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c \

SRCS_BONUS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJS =	${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

NAME =	libft.a

CC =	gcc

RM =	rm -f

LIB =	ar rc

CFLAGS =	-Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}


${NAME}:	${OBJS}
		${LIB} ${NAME} ${OBJS}

bonus:		${OBJS_BONUS}
		${LIB} ${NAME} ${OBJS_BONUS}


all:		${NAME}

clean:
		${RM} ${OBJS} ${OBJS_BONUS}

fclean:		clean
		${RM} ${NAME}

re_bonus:	fclean bonus

re:		fclean all

.PHONY:		all clean flcean re bonus re_bonus
