/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 20:27:09 by aamzdour          #+#    #+#             */
/*   Updated: 2015/12/04 23:31:48 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s1;
	char	*s2;

	s1 = (char *)dest;
	s2 = (char *)src;
	if ((s1 > s2) && (s1 < (s2 + n)))
	{
		s1 = s1 + (n - 1);
		s2 = s2 + (n - 1);
		while (n--)
			*s1-- = *s2--;
	}
	else
	{
		while (n--)
			*s1++ = *s2++;
	}
	return (dest);
}
