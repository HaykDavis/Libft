NAME = libft.a

SRCS = ft_bzero.c ft_memset.c

INCLUDES = ./includes/

CC = gcc

AR = ar rc

OBJS = ${SRCS:.c=.o}

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -I ${INCLUDES} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		 ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
		rm ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
