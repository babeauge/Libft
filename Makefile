# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: babeauge <babeauge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/14 12:11:52 by babeauge          #+#    #+#              #
#    Updated: 2019/12/09 19:00:31 by babeauge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	src/ft_memset.c\
			src/ft_bzero.c\
			src/ft_memcpy.c\
			src/ft_memccpy.c\
			src/ft_memmove.c\
			src/ft_memchr.c\
			src/ft_memcmp.c\
			src/ft_strlen.c\
			src/ft_isalpha.c\
			src/ft_isdigit.c\
			src/ft_isalnum.c\
			src/ft_isascii.c\
			src/ft_isprint.c\
			src/ft_toupper.c\
			src/ft_tolower.c\
			src/ft_strchr.c\
			src/ft_strrchr.c\
			src/ft_strncmp.c\
			src/ft_strlcpy.c\
			src/ft_strlcat.c\
			src/ft_strnstr.c\
			src/ft_atoi.c\
			src/ft_calloc.c\
			src/ft_strdup.c\
			src/ft_substr.c\
			src/ft_strjoin.c\
			src/ft_strtrim.c\
			src/ft_split.c\
			src/ft_itoa.c\
			src/ft_strmapi.c\
			src/ft_putchar_fd.c\
			src/ft_putstr_fd.c\
			src/ft_putendl_fd.c\
			src/ft_putnbr_fd.c

SRCS_B	=	src/ft_lstnew_bonus.c\
			src/ft_lstadd_front_bonus.c\
			src/ft_lstsize_bonus.c\
			src/ft_lstlast_bonus.c\
			src/ft_lstadd_back_bonus.c\
			src/ft_lstdelone_bonus.c\
			src/ft_lstclear_bonus.c\
			src/ft_lstiter_bonus.c\
			src/ft_lstmap_bonus.c\

OBJS	=	${SRCS:.c=.o}

OBJS_B	=	${SRCS_B:.c=.o}

NAME	=	libft.a

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

.c.o:	${OBJS} ${OBJS_B}
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}	

all:		${NAME}

bonus:		${OBJS} ${OBJS_B}
		ar rc ${NAME} ${OBJS} ${OBJS_B}

clean:
		${RM} ${OBJS} ${OBJS_B}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all bonus clean fclean re
