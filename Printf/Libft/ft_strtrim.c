/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 23:06:50 by aamzdour          #+#    #+#             */
/*   Updated: 2015/12/14 18:38:23 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int			check_space(char c)
{
	return ((c == ' ') || (c == '\t') || (c == '\n'));
}

static	const char	*seek_end(const char *str)
{
	str = str + ft_strlen(str);
	while (check_space(*(str - 1)))
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
	while (check_space(*begin))
		begin++;
	end = seek_end(s);
	dest = ft_strsub(begin, 0, (end - begin));
	if (dest == NULL)
	{
		dest = (char*)malloc(1);
		if (dest == NULL)
			return (NULL);
		dest[0] = '\0';
	}
	return (dest);
}
