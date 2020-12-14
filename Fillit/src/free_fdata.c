/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_fdata.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:49:28 by aamzdour          #+#    #+#             */
/*   Updated: 2016/01/20 16:49:29 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "free_fdata.h"

void			free_fdata(t_fillit *fdata)
{
	if (fdata != NULL)
	{
		if (fdata->t_list != NULL)
			free(fdata->t_list);
		if (fdata->map != NULL)
			ft_free_tptr(fdata->map);
	}
}
