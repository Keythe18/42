/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 11:47:54 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 22:49:29 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int			is_blank(char c)
{
	return ((c == ' ') || (c == '\t') || (c == '\n'));
}

static const char	*seek_end(const char *str)
{
	str = str + ft_strlen(str);
	while (is_blank(*(str - 1)))
		str--;
	return (str);
}

char				*ft_strtrim(char const *s)
{
	char		*dest;
	const char	*begin;
	const char	*end;

	if (s == NULL)
		return (NULL);
	begin = s;
	while (is_blank(*begin))
		begin++;
	end = seek_end(s);
	dest = ft_strsub(begin, 0, (end - begin));
	if (dest == NULL)
	{
		if ((dest = (char*)malloc(1)) != NULL)
			dest[0] = '\0';
		else
			return (NULL);
	}
	return (dest);
}
