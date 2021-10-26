NAME= libft.a

SOURCES=ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_strchr.c \
ft_strcmp.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_substr.c \
ft_strdup.c \
ft_tolower.c \
ft_toupper.c \

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
