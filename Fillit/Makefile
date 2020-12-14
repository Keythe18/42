#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/10 17:23:27 by kmonrose          #+#    #+#              #
#   Updated: 2016/01/11 09:53:04 by kmonrose           ###   ########.fr       #
#                                                                              #
#******************************************************************************#

NAME =				fillit

SRC_PATH =			./src/
OBJ_PATH =			./obj/
INC_PATH =			./include/ \
					./libft/include/
LIB_PATH =			./libft/

LIB_NAMES =			-lft

SRC_NAME =		 	main.c \
		 			check_file_integrity.c \
		 			print_map.c \
		 			get_tetrominos.c \
		 			print_tetrominos.c \
		 			valid_tetrominos.c \
		 			init_map.c \
		 			fill_map.c \
		 			resolve_fillit.c \
		 			free_fdata.c \

CC =				gcc
CFLAGS =			-Werror -Wall -Wextra

OBJ_NAME =			$(SRC_NAME:.c=.o)

SRC	=				$(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ =				$(addprefix $(OBJ_PATH),$(OBJ_NAME))
LIB	=				$(addprefix -L,$(LIB_PATH))
INC	=				$(addprefix -I,$(INC_PATH))

LDFLAGS =			$(LIB) $(LIB_NAMES)

all: 				$(NAME)

$(NAME):			$(OBJ)
	$(CC) $^ -o $@ $(LDFLAGS)

$(OBJ_PATH)%.o:		$(SRC_PATH)%.c
	make -C ./libft/
	@mkdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	make clean -C ./libft/
	rm -fv $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null

fclean: clean
	make fclean -C ./libft/
	rm -fv $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
