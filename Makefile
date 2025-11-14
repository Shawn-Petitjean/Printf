NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = src/ft_printf.c


OBJ = ${SRCS:.c=.o}
HEADER = -I./includes
RM = rm -rf
LIBFT = include/Libft/libft.a


all: ${NAME}

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}
%.o: %.c
	${CC} ${CFLAGS} ${LIBFT} ${HEADER} -c $< -o $@
clean:
	${RM} ${OBJ} 

fclean: clean
	${RM} ${NAME} 

re: fclean all

.PHONY: all clean fclean re 