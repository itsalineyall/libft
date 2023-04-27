NAME = libft.a
SRC = ${wildcard ft_*.c}
OBJS = ${SRC:.c=.o}
HEADER = libft.h
INCLUDE = -I .
COMP = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
.c.o:
	${COMP} ${FLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}
	
$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS} ${HEADER}

all:    ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} rm teste

tclean: clean
	${RM} teste

re: fclean all

teste: re
	${COMP} ${FLAGS} ${INCLUDE} main.c ${NAME} -o teste

.PHONY: all clean fclean tclean re teste