/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:49:58 by aamzdour          #+#    #+#             */
/*   Updated: 2015/12/14 17:54:29 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char*)s;
	while (i < n)
	{
		if ((unsigned char)ptr[i] == (unsigned char)c)
			return (&(ptr[i]));
		i++;
	}
	return (NULL);
}
