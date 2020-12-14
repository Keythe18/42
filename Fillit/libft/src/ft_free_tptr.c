/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/21 22:44:15 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/05 06:26:57 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_free_tptr(char **tptr)
{
	int		i;

	i = 0;
	if (tptr != NULL)
	{
		while (tptr[i])
		{
			i++;
			free(tptr[i - 1]);
		}
		free(tptr);
		tptr = NULL;
	}
	return (i);
}
