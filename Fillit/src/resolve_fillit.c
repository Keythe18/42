/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_fillit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:50:25 by aamzdour          #+#    #+#             */
/*   Updated: 2016/01/20 19:33:23 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "resolve_fillit.h"

int				resolve_fillit(t_fillit *f_data)
{
	int			i;
	int			ret;

	ret = 0;
	i = 0;
	while (i < MAX_ITER && ret == 0)
	{
		ft_free_tptr(f_data->map);
		if (init_map(f_data, i) > 0)
			ret = fill_map(f_data, 0);
		else
		{
			ret = -1;
			break ;
		}
		i++;
	}
	if (ret == 1)
		print_map(f_data);
	return (ret);
}
