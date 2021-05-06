NAME = libft.a

SRCS = ft_bzero.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_isascii.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_strjoin.c \
		# ft_strtrim.c \

		
GCC = gcc

OBJS = ${SRCS:.c=.o}

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		 ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
		rm ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
