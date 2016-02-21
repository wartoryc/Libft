# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jumurphy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/12 18:58:05 by jumurphy          #+#    #+#              #
#    Updated: 2016/02/17 16:56:21 by jumurphy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

NEEDED = ./libft.h

FLAG = -Wall -Wextra -Werror

OPTIONS = -c -I $(NEEDED)

SRC =	ft_bzero.c \
	ft_isalpha.c \
	ft_isalnum.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_isascii.c \
	ft_atoi.c \
	ft_itoa.c \
	ft_memalloc.c \
	ft_memdel.c \
	ft_memset.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memmove.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_putchar.c \
	ft_putchar_fd.c \
	ft_putendl.c \
	ft_putendl_fd.c \
	ft_putnbr.c \
	ft_putnbr_fd.c \
	ft_putstr.c \
	ft_putstr_fd.c \
	ft_strdup.c \
	ft_strcmp.c \
	ft_strcat.c \
	ft_strncat.c \
	ft_strlcat.c \
	ft_strstr.c \
	ft_strnstr.c \
	ft_strclr.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strcpy.c \
	ft_strdel.c \
	ft_strequ.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlen.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strncpy.c \
	ft_strnequ.c \
	ft_strnew.c \
	ft_strsplit.c \
	ft_strsub.c \
	ft_strtrim.c \
	ft_tolower.c \
	ft_toupper.c
OBJECTS =	ft_bzero.o \
		ft_isalpha.o \
		ft_isalnum.o \
		ft_isdigit.o \
		ft_isascii.o \
		ft_isprint.o \
		ft_atoi.o \
		ft_itoa.o \
		ft_memalloc.o \
		ft_memset.o \
		ft_memdel.o \
		ft_memchr.o \
		ft_memcmp.o \
		ft_memmove.o \
		ft_memcpy.o \
		ft_memccpy.o \
		ft_putchar.o \
		ft_putchar_fd.o \
		ft_putendl.o \
		ft_putendl_fd.o \
		ft_putnbr.o \
		ft_putnbr_fd.o \
		ft_putstr.o \
		ft_putstr_fd.o \
		ft_strdup.o \
		ft_strcat.o \
		ft_strncat.o \
		ft_strlcat.o \
		ft_strstr.o \
		ft_strnstr.o \
		ft_strchr.o \
		ft_strrchr.o \
		ft_strcmp.o \
		ft_strclr.o \
		ft_strcpy.o \
		ft_strdel.o \
		ft_strequ.o \
		ft_striter.o \
		ft_striteri.o \
		ft_strjoin.o \
		ft_strlen.o \
		ft_strmap.o \
		ft_strmapi.o \
		ft_strncpy.o \
		ft_strnequ.o \
		ft_strnew.o \
		ft_strsplit.o \
		ft_strsub.o \
		ft_strtrim.o \
		ft_tolower.o \
		ft_toupper.o

all:	$(NAME)

$(NAME):
	gcc $(FLAG) $(OPTIONS) $(SRC)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(NAME)

re: fclean all
