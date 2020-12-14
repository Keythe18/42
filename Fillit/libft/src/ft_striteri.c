/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 21:44:17 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/05 06:32:11 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;
	char				*cmp_null;
	void				(*ft_null)(unsigned in, char*);

	i = 0;
	cmp_null = NULL;
	ft_null = NULL;
	if (s != cmp_null && ft_null != f)
	{
		while (s[i] != 0)
		{
			f(i, &s[i]);
			i++;
		}
	}
}
