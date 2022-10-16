SRCS	= ${wildcard srcs/*.c}
BONUS	= ${wildcard bonus/*.c}
OBJS	= ${SRCS:.c=.o}
BOBJS 	= ${BONUS:.c=.o}
INCS	= include
NAME	= libft.a
LIBC	= ar rc #r yenıden olusturma , c mesajı gizler 
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

bonus : ${BOBJS} 
	${LIBC} ${NAME} ${BOBJS}

clean:
	${RM} ${OBJS}
	${RM} ${BOBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all bonus clean fclean re
