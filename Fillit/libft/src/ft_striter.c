/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 20:52:16 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/05 06:32:06 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_striter(char *s, void (*f)(char*))
{
	char	*cmp_null;
	void	(*ft_null)(char*);

	cmp_null = NULL;
	ft_null = NULL;
	if (s != cmp_null && ft_null != f)
	{
		while (*s)
		{
			f(s);
			s++;
		}
	}
}
