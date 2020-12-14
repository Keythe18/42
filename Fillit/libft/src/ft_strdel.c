/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 20:15:33 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/05 06:31:40 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strdel(char **as)
{
	char	**cmp_null;

	cmp_null = NULL;
	if (cmp_null != as)
	{
		free(*as);
		*as = NULL;
	}
}
