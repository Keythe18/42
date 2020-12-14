/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 21:58:15 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 21:55:50 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	char	*cmp_null;
	char	(*ft_null)(unsigned int, char);
	int		i;

	i = 0;
	cmp_null = NULL;
	ft_null = NULL;
	if (s != cmp_null && ft_null != f)
	{
		if ((new = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))) != NULL)
		{
			while (s[i] != 0)
			{
				new[i] = f(i, s[i]);
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
