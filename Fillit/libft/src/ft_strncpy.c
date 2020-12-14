/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:04:26 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/05 06:33:28 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	char	*ret;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s2);
	ret = s1;
	while (n--)
	{
		if (i < len)
		{
			*s1 = *s2;
			i++;
		}
		else
			*s1 = '\0';
		s1++;
		s2++;
	}
	return (ret);
}
