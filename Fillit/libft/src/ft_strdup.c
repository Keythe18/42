/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:38:04 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 21:05:20 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char		*copy;
	size_t		size;
	int			i;

	i = 0;
	size = ft_strlen((char*)str) + 1;
	if ((copy = (char*)malloc(sizeof(char) * size)) != NULL)
	{
		ft_bzero(copy, size);
		if (str[i] == '\0')
			copy[i] = '\0';
		while (str[i] != '\0')
		{
			copy[i] = str[i];
			i++;
		}
		return (copy);
	}
	return (NULL);
}
