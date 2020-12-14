/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:19:44 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/05 06:35:38 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	while (n--)
	{
		*(char*)s1 = *(char*)s2;
		if (*(char*)s2 == (char)c)
			return (s1 + 1);
		s1++;
		s2++;
	}
	return (NULL);
}
