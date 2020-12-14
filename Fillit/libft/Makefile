#******************************************************************************#
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: kmonrose <kvmonrose@gmail.com>               +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2015/12/12 11:54:44 by kmonrose            #+#    #+#             #
#   Updated: 2015/12/27 17:56:12 by kmonrose           ###   ########.fr       #
#                                                                              #
#******************************************************************************#


NAME =				libft.a

SRC_PATH =			./src/
OBJ_PATH =			./obj/
INC_PATH =			./include/

SRC_NAME =			ft_putchar.c \
		 			ft_putstr.c \
					ft_putnbr.c \
					ft_strlen.c \
					ft_isalpha.c \
					ft_isdigit.c \
					ft_isalnum.c \
					ft_isprint.c \
					ft_isascii.c \
					ft_atoi.c \
					ft_strcat.c \
		 			ft_toupper.c \
					ft_tolower.c \
					ft_putendl.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
					ft_memset.c \
					ft_bzero.c \
		 			ft_strstr.c \
					ft_memalloc.c \
					ft_strdup.c \
					ft_strcpy.c \
					ft_strcmp.c \
					ft_strncmp.c \
					ft_strncpy.c \
					ft_strchr.c \
					ft_strrchr.c \
		 			ft_free_tptr.c \
					ft_strsplit.c \
					ft_strnstr.c \
					ft_memdel.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memccpy.c \
					ft_memmove.c \
					ft_memchr.c \
		 			ft_strncat.c \
					ft_strlcat.c \
					ft_striter.c \
					ft_strmap.c \
					ft_striteri.c \
					ft_strmapi.c \
					ft_strequ.c \
					ft_strnequ.c \
					ft_strsub.c \
		 			ft_strjoin.c \
					ft_strtrim.c \
					ft_strclr.c \
					ft_strdel.c \
					ft_putnbrendl.c \
					ft_swap_str.c \
					ft_str3join.c \
					get_next_line.c \
		 			ft_next_prime.c \
					ft_realloc.c \
					ft_strn2str.c \
					ft_strnew.c \
					ft_itoa.c \
					ft_strnjoin.c \
					ft_strnjoin_wd.c \
					ft_abs.c \
		 			ft_fabs.c \
					ft_fatoi.c \
					ft_fpow.c \
					ft_fsqrt.c \
					ft_fcos.c \
					ft_fsin.c \
					ft_remove_blank.c \
					ft_fact.c \
					ft_add_echap_char.c \
					ft_del_echap_char.c \

CC =				gcc
CFLAGS =			-Werror -Wall -Wextra

OBJ_NAME =			$(SRC_NAME:.c=.o)

SRC	=				$(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ =				$(addprefix $(OBJ_PATH),$(OBJ_NAME))
INC	=				$(addprefix -I,$(INC_PATH))

all: 				$(NAME)

$(NAME):			$(OBJ)
	ar -q $@ $^
	ranlib $@

$(OBJ_PATH)%.o:		$(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	rm -fv $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null

fclean: clean
	rm -fv $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
