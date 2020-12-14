/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:49:19 by aamzdour          #+#    #+#             */
/*   Updated: 2016/01/20 19:18:04 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_map.h"

static int		del_tetrominos_in_map(t_fillit *fdata, int i, int x, int y)
{
	int			xm;
	int			ym;
	int			xt;
	int			yt;

	yt = fdata->t_list[i].pos.y;
	xt = fdata->t_list[i].pos.x;
	ym = y;
	while (yt < 4 && ym < fdata->map_size)
	{
		xt = fdata->t_list[i].pos.x;
		xm = x;
		while (xt < 4 && xm < fdata->map_size)
		{
			if (fdata->t_list[i].tetrominos[xt][yt] != '.')
				fdata->map[xm][ym] = '.';
			xm++;
			xt++;
		}
		yt++;
		ym++;
	}
	return (1);
}

static int		add_tetrominos_in_map(t_fillit *fdata, int i, int x, int y)
{
	int			xm;
	int			ym;
	int			xt;
	int			yt;

	yt = fdata->t_list[i].pos.y;
	xt = fdata->t_list[i].pos.x;
	ym = y;
	while (yt < 4 && ym < fdata->map_size)
	{
		xt = fdata->t_list[i].pos.x;
		xm = x;
		while (xt < 4 && xm < fdata->map_size)
		{
			if (fdata->t_list[i].tetrominos[xt][yt] != '.')
				fdata->map[xm][ym] = fdata->t_list[i].tetrominos[xt][yt];
			xm++;
			xt++;
		}
		yt++;
		ym++;
	}
	return (1);
}

static int		check_tetrominos_placement(t_fillit *fdata, int i, int x, int y)
{
	int				tab[TAB_SIZE];

	YT = fdata->t_list[i].pos.y;
	B = 0;
	while (YT < 4 && y < fdata->map_size)
	{
		XT = fdata->t_list[i].pos.x;
		XM = x;
		while (XT < 4 && XM < fdata->map_size)
		{
			if (fdata->t_list[i].tetrominos[XT++][YT] != '.')
			{
				if (fdata->map[XM][y] != '.')
					return (0);
				else
					B++;
			}
			XM++;
		}
		YT++;
		y++;
	}
	if (B == 4)
		return (1);
	return (0);
}

int				fill_map(t_fillit *f_data, int index)
{
	int			x;
	int			y;

	if (f_data->nb_pieces == index)
		return (1);
	y = 0;
	while (y < f_data->map_size && (f_data->map_size - y) >= H)
	{
		x = 0;
		while (x < f_data->map_size && (f_data->map_size - x) >= W)
		{
			if (check_tetrominos_placement(f_data, index, x, y))
			{
				add_tetrominos_in_map(f_data, index, x, y);
				if (!fill_map(f_data, index + 1))
					del_tetrominos_in_map(f_data, index, x, y);
				else
					return (1);
			}
			x++;
		}
		y++;
	}
	return (0);
}
