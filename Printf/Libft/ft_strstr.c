/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:57:32 by aamzdour          #+#    #+#             */
/*   Updated: 2015/12/14 17:55:56 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		j;
	int		diff_found;

	if (to_find[0] == '\0')
		return (char *)str;
	i = -1;
	while (str[++i])
	{
		j = 0;
		diff_found = 0;
		while (to_find[j] && diff_found == 0)
		{
			if (to_find[j] != str[i + j])
				diff_found = 1;
			if (str[i + j] == '\0')
				return (NULL);
			j++;
		}
		if (!diff_found)
			return (char *)(&(str[i]));
	}
	return (0);
}
