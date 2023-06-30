SRCS =			rot.c \

CC =			cc

FLAGS =			-Wall -Wextra -Werror

RM =			rm -f

NAME =			rot

OBJS =			$(SRCS:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $(NAME)

.c.o:
				${CC} ${FLAGS} -c $< -o ${<:.c=.o}

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re