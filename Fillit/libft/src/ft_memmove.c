/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:19:54 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/05 06:28:45 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s1;
	char	*s2;

	s1 = (char*)dest;
	s2 = (char*)src;
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
