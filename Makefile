NAME = libft.a

SRCS =	ft_isascii.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c\
		ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c\
		ft_memset.c ft_memchr.c ft_memmove.c ft_bzero.c ft_memcpy.c\
		ft_memcmp.c ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_strlcat.c\
		ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c
		

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o:%.c
	$(CC) -c $< -o $@

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
