/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 19:28:50 by aamzdour          #+#    #+#             */
/*   Updated: 2015/12/04 23:15:28 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(char *s1, char *s2, size_t n)
{
	size_t	len;

	len = ft_strlen(s2);
	while (*s1 && n-- >= len)
	{
		if (!ft_memcmp(s1, s2, len))
			return (s1);
		s1++;
	}
	return (NULL);
}
