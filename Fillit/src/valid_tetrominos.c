/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_tetrominos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:50:32 by aamzdour          #+#    #+#             */
/*   Updated: 2016/01/20 20:42:01 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "valid_tetrominos.h"

static int			check_block(t_tetrominos t, int x, int y)
{
	int		b;

	b = 0;
	if (x > 0)
	{
		if (t.tetrominos[x - 1][y] == t.tetrominos[x][y])
			b++;
	}
	if (x < 3)
	{
		if (t.tetrominos[x + 1][y] == t.tetrominos[x][y])
			b++;
	}
	if (y > 0)
	{
		if (t.tetrominos[x][y - 1] == t.tetrominos[x][y])
			b++;
	}
	if (y < 3)
	{
		if (t.tetrominos[x][y + 1] == t.tetrominos[x][y])
			b++;
	}
	return (b);
}

static int			check_one_tetrominos(t_tetrominos t, int t_index)
{
	int		x;
	int		y;
	int		total_joints;
	int		ret;

	y = 0;
	total_joints = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (t.tetrominos[x][y] == 'A' + t_index)
			{
				ret = check_block(t, x, y);
				if (!ret)
					return (0);
				else
					total_joints += ret;
			}
			x++;
		}
		y++;
	}
	return (total_joints);
}

static void			get_start_pos(t_tetrominos *t, int t_index)
{
	int		x;
	int		y;

	t->pos.x = 3;
	t->pos.y = 3;
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (t->tetrominos[x][y] == 'A' + t_index)
			{
				t->pos.x = x < t->pos.x ? x : t->pos.x;
				t->pos.y = y < t->pos.y ? y : t->pos.y;
			}
			x++;
		}
		y++;
	}
}

static void			get_tetrominos_dimensions(t_tetrominos *t, int t_index)
{
	int		x;
	int		y;
	int		tmp;

	t->width = 0;
	t->height = 0;
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			tmp = 0;
			while (x + tmp < 4 && t->tetrominos[x + tmp][y] == 'A' + t_index)
				tmp++;
			t->width = tmp > t->width ? tmp : t->width;
			tmp = 0;
			while (y + tmp < 4 && t->tetrominos[x][y + tmp] == 'A' + t_index)
				tmp++;
			t->height = tmp > t->height ? tmp : t->height;
			x++;
		}
		y++;
	}
}

int					valid_tetrominos(t_tetrominos *f_data, int nb_pieces)
{
	int		i;

	if (f_data != NULL)
	{
		i = 0;
		while (i < nb_pieces)
		{
			if (check_one_tetrominos(f_data[i], i) <= 4)
				return (0);
			get_start_pos(&f_data[i], i);
			get_tetrominos_dimensions(&f_data[i], i);
			i++;
		}
	}
	return (1);
}
