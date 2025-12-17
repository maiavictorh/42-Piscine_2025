# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: victode- <victode-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 17:33:24 by victode-          #+#    #+#              #
#    Updated: 2025/10/14 17:37:08 by victode-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
SRCS= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS= $(SRCS:.c=.o)
CC= cc
CFLAGS= -Wall -Wextra -Werror -Iincludes
COMPRESS= ar rcs
RM= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPRESS) $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: main.c
	$(CC) $(CFLAGS) main.c -L. -lft -o test

.PHONY: all clean fclean re