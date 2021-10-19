NAME= libft.a

SOURCES= *.c 

OBJS=	$(SOURCES:.c=.o)

FLAGS=	-Wall -Werror -Wextra

all:$(NAME)

$(NAME):$(OBJS)
	ar crs $(NAME) $(OBJS)

.c.o:
	gcc $(FLAGS) -c $< -o $(<:.c=.o)
clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)
re : fclean all

.PHONY : all clean fclean re
