SRC			= do-op.c ft_add.c ft_atoi.c ft_div.c ft_mod.c ft_mul.c ft_putnbr.c ft_sub.c 
SRCS		= ${addprefix ${PRE}, ${SRC}}
OBJS		= ${SRCS:.c=.o}
PRE			= ./srcs/
HEAD		= ./includes/
NAME		= do-op
RM			= rm -f
GCC			= gcc
CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}
			${GCC} ${FLAGS} -o ${NAME} ${SRCS} -I ${HEAD}

.c.o:
			${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM}  ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
