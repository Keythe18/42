/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:08:19 by aamzdour          #+#    #+#             */
/*   Updated: 2015/11/27 20:44:36 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = (char*)src;
	while (i < n)
	{
		((char*)dest)[i] = tmp[i];
		i++;
	}
	return (dest);
}
