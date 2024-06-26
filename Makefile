# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 12:03:42 by ahamalai          #+#    #+#              #
#    Updated: 2023/11/13 11:31:09 by ahamalai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	  ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
	  ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	  ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	  ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	  ft_atoi.c ft_calloc.c ft_strdup.c ft_putchar_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	  ft_strjoin.c ft_substr.c ft_strtrim.c ft_itoa.c \
	  ft_split.c ft_striteri.c ft_strmapi.c

OBJ = $(SRC:.c=.o)

HEADERS = ./includes

%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $@ -I $(HEADERS)

$(NAME): $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

libft.a: $(OBJ)
	ar -rc libft.a $(OBJ)

.PHONY: all clean fclean re 
