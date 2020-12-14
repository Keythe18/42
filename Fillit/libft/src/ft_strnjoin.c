/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 22:48:10 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 22:48:12 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_copy_join(char **s, char *copy)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (s[i][j] != '\0')
		{
			copy[k] = s[i][j];
			j++;
			k++;
		}
		i++;
	}
	copy[k] = '\0';
	return (copy);
}

char		*ft_strnjoin(char **s)
{
	char		*scat;
	char		**cmp_null;
	int			len;
	int			i;

	i = 0;
	cmp_null = NULL;
	len = 0;
	if (cmp_null != s)
	{
		while (s[i])
		{
			len += ft_strlen(s[i]);
			i++;
		}
		scat = (char*)malloc(sizeof(char) * (len + 1));
		scat = ft_copy_join(s, scat);
		return (scat);
	}
	return ((char*)s);
}
