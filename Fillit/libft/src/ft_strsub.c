/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 11:06:45 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 21:56:14 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	char		*cmp_null;
	size_t		i;

	cmp_null = NULL;
	if ((int)len < 0)
		return (NULL);
	if (cmp_null != s)
	{
		if ((sub = (char*)malloc(sizeof(char) * (len + 1))) != NULL)
		{
			i = 0;
			while (i < len)
			{
				sub[i] = s[start + i];
				i++;
			}
			sub[i] = '\0';
			return (sub);
		}
		else
			return (NULL);
	}
	return ((char*)s);
}
