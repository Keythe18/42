/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_blank.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/13 00:51:42 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 22:47:00 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	get_blank_count(char *str)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
			result++;
		i++;
	}
	return (result);
}

char		*ft_remove_blank(char *str)
{
	char		*new_str;
	int			new_size;
	int			i;
	int			j;

	i = 0;
	j = 0;
	new_str = NULL;
	if (str)
	{
		new_size = ft_strlen(str) - get_blank_count(str) + 1;
		new_str = (char*)malloc(sizeof(char) * new_size);
		while (str[j] != '\0')
		{
			if (str[j] != ' ' && str[j] != '\t')
			{
				new_str[i] = str[j];
				i++;
			}
			j++;
		}
		new_str[i] = '\0';
	}
	return (new_str);
}
