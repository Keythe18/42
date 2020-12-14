/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:36:28 by aamzdour          #+#    #+#             */
/*   Updated: 2015/12/14 17:53:31 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	ptr1 = (char*)dest;
	ptr2 = (char*)src;
	i = 0;
	while (i < n)
	{
		if (ptr2[i] == (char)c)
		{
			ptr1[i] = ptr2[i];
			return (&(ptr1[i + 1]));
		}
		ptr1[i] = ptr2[i];
		i++;
	}
	return (NULL);
}
