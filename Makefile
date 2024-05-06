# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yutsasak <yutsasak@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/04 15:32:37 by yutsasak          #+#    #+#              #
#    Updated: 2024/05/06 13:41:14 by yutsasak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_isascii.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c\
		ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c\
		ft_memset.c ft_memchr.c ft_memmove.c ft_bzero.c ft_memcpy.c\
		ft_memcmp.c ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_strlcat.c\
		ft_atoi.c ft_calloc.c ft_strdup.c ft_strtrim.c ft_split.c\
		ft_itoa.c ft_strmapi.c\
		ft_substr.c ft_strjoin.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c\
		ft_putnbr_fd.c ft_putstr_fd.c\
		
BONUS =		ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

OBJS = $(SRCS:.c=.o)
BOBJS = $(BONUS:.c=.o)
INCLUDES =  -I libft.h

CC = cc

CFLAGS = -Wall -Wextra -Werror $(INCLUDES)

ifdef WITH_BONUS
	OBJS += $(BOBJS)
endif

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	
%.o:%.c
	${CC} ${CFLAGS} -c $< -o $@
	
bonus:
	@$(MAKE) WITH_BONUS=TRUE

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
