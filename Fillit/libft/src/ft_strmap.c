/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 21:21:00 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 21:55:02 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	char	*cmp_null;
	char	(*ft_null)(char);
	int		i;

	i = 0;
	cmp_null = NULL;
	ft_null = NULL;
	if (cmp_null != s && ft_null != f)
	{
		if ((new = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))) != NULL)
		{
			while (s[i] != 0)
			{
				new[i] = f(s[i]);
				i++;
			}
			new[i] = '\0';
			return (new);
		}
		else
			return (NULL);
	}
	return ((char*)s);
}
