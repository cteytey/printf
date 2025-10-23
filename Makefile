# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 17:36:54 by judehon           #+#    #+#              #
#    Updated: 2025/10/23 19:33:06 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc -Wall -Wextra -Werror

NAME = libftprintf.a

ARCS = -ar rcs

SOURCE = ft_printf.c \
	ft_putsome.c \

HEADER = -Ift_printf.h

OBJ = $(SOURCE:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(ARCS) $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

run: $(NAME)
	$(CC) main.c $(NAME)
	./a.out

.PHONY: all clean fclean re
