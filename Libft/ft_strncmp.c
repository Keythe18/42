/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:55:55 by aamzdour          #+#    #+#             */
/*   Updated: 2015/12/15 18:01:03 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t				i;
	const unsigned char *p1 = (const unsigned char *)s1;
	const unsigned char *p2 = (const unsigned char *)s2;

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
