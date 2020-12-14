#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hnguyen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/02 18:23:43 by hnguyen           #+#    #+#              #
#    Updated: 2015/04/02 19:31:34 by hnguyen          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

.POHNY : clean fclean re

CC = gcc -Wall -Werror -Wextra -framework OpenGL -framework AppKit

NAME = wolf3d

SRC = srcs/draw_vertical_line.c\
	srcs/event_keys.c\
	srcs/event_keys2.c\
	srcs/get_map.c\
	srcs/main.c\
	srcs/raycasting.c\
	srcs/wolf3d_init.c

OBJ = $(SRC:.c=.o)

HEADER = includes/wolf3d.h

all: lib $(NAME)
	$(CC) -o $(NAME) $(OBJ) libft/libft.a minilibx_macos/libmlx.a

$(NAME): $(OBJ)

(%.o): $(HEADER) %.c
	$(CC) -c -o $@ $^

lib:
	@make -C libft/

cleanlib:
	@make -C libft/ clean

fcleanlib:
	@make -C libft/ fclean

relib:
	@make -C libft/ re

norme:
	norminette $(SRC) $(HEADER)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all