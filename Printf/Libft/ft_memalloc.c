/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 23:32:06 by aamzdour          #+#    #+#             */
/*   Updated: 2015/12/04 23:32:17 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
