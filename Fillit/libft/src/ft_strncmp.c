/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:41:09 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 22:49:01 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t					i;
	const unsigned char		*p1 = (const unsigned char *)s1;
	const unsigned char		*p2 = (const unsigned char *)s2;

	i = 0;
	if (n == 0)
		return (0);
	while ((*p1 && *p1 == *p2) && i < (n - 1))
	{
		p1++;
		p2++;
		i++;
	}
	if (*p1 != *p2)
		return (*p1 - *p2);
	return (0);
}
