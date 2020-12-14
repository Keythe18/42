/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 22:11:04 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/05 06:31:59 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_strequ(char const *s1, char const *s2)
{
	char	*cmp_null;

	cmp_null = NULL;
	if (cmp_null != s1 && cmp_null != s2)
	{
		while (*s1)
		{
			if (*s1 != *s2)
				return (0);
			s1++;
			s2++;
		}
		if (*s1 != *s2)
			return (0);
		else
			return (1);
	}
	return (1);
}
