/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tetrominos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:50:18 by aamzdour          #+#    #+#             */
/*   Updated: 2016/01/20 16:50:19 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_tetrominos.h"

void	print_extra_data(t_tetrominos *f_data, int i)
{
	ft_putendl("start positions:");
	ft_putstr("x:");
	ft_putnbrendl(f_data[i].pos.x);
	ft_putstr("y:");
	ft_putnbrendl(f_data[i].pos.y);
	ft_putendl("\ntetrominos dimensions:");
	ft_putstr("width:");
	ft_putnbrendl(f_data[i].width);
	ft_putstr("height:");
	ft_putnbrendl(f_data[i].height);
	ft_putchar('\n');
}

void	print_tetrominos(t_tetrominos *f_data, int nb_pieces)
{
	int i;
	int y;
	int x;

	i = 0;
	y = 0;
	x = 0;
	while (i < nb_pieces)
	{
		print_extra_data(f_data, i);
		y = 0;
		while (y < 4)
		{
			x = 0;
			while (x < 4)
			{
				ft_putchar(f_data[i].tetrominos[x][y]);
				x++;
			}
			ft_putchar('\n');
			y++;
		}
		ft_putchar('\n');
		i++;
	}
}
