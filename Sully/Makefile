NAME = Sully
FLAGS = -Wall -Wextra -Werror
SRCS = Sully.c
OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	gcc $(FLAGS) -o $(NAME) $(OBJ)

%.o : %.c
	gcc $(FLAGS) -c $<

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re $(NAME)