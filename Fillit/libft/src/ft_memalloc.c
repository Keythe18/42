/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:20:54 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/05 06:28:03 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*area;

	if (((area = malloc(size)) == NULL) || size == 0)
		return (NULL);
	else
	{
		ft_bzero(area, size);
		return (area);
	}
}
