/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 12:10:26 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/05 06:28:38 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_memdel(void **ap)
{
	void	**cmp_null;

	cmp_null = NULL;
	if (cmp_null != ap)
	{
		free(*ap);
		*ap = NULL;
	}
}
