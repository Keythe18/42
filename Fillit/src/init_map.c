/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:49:44 by aamzdour          #+#    #+#             */
/*   Updated: 2016/01/20 19:20:44 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init_map.h"
#include <stdio.h>

static int			get_min_size(t_fillit *f_data)
{
	int		i;
	int		r;

	r = 0;
	if (f_data != NULL && f_data->t_list != NULL)
	{
		i = 0;
		while (i < f_data->nb_pieces)
		{
			r = f_data->t_list[i].width > r ? f_data->t_list[i].width : r;
			r = f_data->t_list[i].height > r ? f_data->t_list[i].height : r;
			i++;
		}
	}
	return (r);
}

static int			get_map_size(t_fillit *f_data, int iter)
{
	float	n;
	int		tmp;
	int		map_size;

	n = ft_fsqrt(f_data->nb_pieces * 4);
	tmp = (int)n;
	tmp = n > tmp ? tmp + 1 : tmp;
	map_size = tmp + iter;
	return (map_size > get_min_size(f_data) ? map_size : get_min_size(f_data));
}

static void			init_line(t_fillit *f_data, int i)
{
	if (f_data->map[i] != NULL)
	{
		ft_memset(f_data->map[i], '.', f_data->map_size);
		f_data->map[i][f_data->map_size] = '\0';
	}
}

int					init_map(t_fillit *f_data, int iter)
{
	int				i;

	i = 0;
	f_data->map_size = get_map_size(f_data, iter);
	f_data->map = (char**)malloc(sizeof(char*) * f_data->map_size + 1);
	if (f_data->map != NULL)
	{
		while (i < f_data->map_size)
		{
			f_data->map[i] = (char*)malloc(sizeof(char) * f_data->map_size + 1);
			if (f_data->map[i] == NULL)
			{
				f_data->map_size = -1;
				break ;
			}
			else
				init_line(f_data, i);
			i++;
		}
		f_data->map[i] = NULL;
	}
	else
		f_data->map_size = -1;
	return (f_data->map_size);
}
