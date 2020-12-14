/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:50:05 by aamzdour          #+#    #+#             */
/*   Updated: 2016/01/20 16:50:07 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_map.h"

void			print_map(t_fillit *fdata)
{
	int			x;
	int			y;

	if (fdata != NULL)
	{
		y = 0;
		while (y < fdata->map_size)
		{
			x = 0;
			while (x < fdata->map_size)
			{
				ft_putchar(fdata->map[x][y]);
				x++;
			}
			ft_putchar('\n');
			y++;
		}
	}
}
