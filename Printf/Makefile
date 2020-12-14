
.PHONY : clean fclean re

NAME = libftprintf.a

CC = gcc -Wall -Werror -Wextra

SRC = srcs/ft_printf.c\
	srcs/ft_printf_conv_c.c\
	srcs/ft_printf_conv_d1.c\
	srcs/ft_printf_conv_d2.c\
	srcs/ft_printf_conv_o1.c\
	srcs/ft_printf_conv_o2.c\
	srcs/ft_printf_conv_p.c\
	srcs/ft_printf_conv_s.c\
	srcs/ft_printf_conv_u1.c\
	srcs/ft_printf_conv_u2.c\
	srcs/ft_printf_conv_unicode.c\
	srcs/ft_printf_conv_x1.c\
	srcs/ft_printf_conv_x2.c\
	srcs/ft_printf_conv_x3.c\
	srcs/ft_printf_conv_x4.c\
	srcs/ft_printf_flags1.c\
	srcs/ft_printf_flags2.c\
	srcs/ft_printf_format.c\
	srcs/ft_printf_init.c\
	srcs/ft_printf_no_conv.c\
	srcs/ft_printf_print1.c\
	srcs/ft_printf_print2.c\
	srcs/ft_printf_print3.c\
	srcs/ft_printf_spec.c\

HEADER = includes/ft_printf.h

OBJ = $(SRC:.c=.o)

all: lib $(NAME)

$(NAME):	$(OBJ)
	@ar x libft/libft.a
	@ar r $(NAME) $(OBJ) *.o
	@ranlib $(NAME)
	@rm *.o __.SYMDEF*

(%.o):	$(HEADER) %.c
	@$(CC) -c -I ./libft/includes -L ./libft/ -lft $< -o $*.o

lib:
	make -C libft/

relib:
	make -C libft/ re

cleanlib:
	make -C libft/ clean

fcleanlib:
	make -C libft/ fclean

norme:
	@norminette $(SRC) $(HEADER)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re: fclean all