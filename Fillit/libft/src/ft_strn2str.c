/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strn2str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:31:09 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/05 06:33:06 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strn2str.h"

char	*ft_strn2str(char *str, char *to_find, size_t n)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	if (*to_find == 0)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0' && LEN)
		{
			if (j == 0)
				result = &str[i + j];
			j++;
		}
		if (to_find[j] == '\0')
			return (result);
		i++;
	}
	return (NULL);
}
