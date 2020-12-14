/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 22:01:43 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/05 06:34:00 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(char *s1, char *s2, size_t n)
{
	size_t		len;

	len = ft_strlen(s2);
	while (*s1 && n-- >= len)
	{
		if (!ft_memcmp(s1, s2, len))
			return (s1);
		s1++;
	}
	return (NULL);
}
