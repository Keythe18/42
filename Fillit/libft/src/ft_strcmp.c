/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:36:47 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 22:47:20 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	const unsigned char			*tmp1;
	const unsigned char			*tmp2;

	tmp1 = (const unsigned char*)s1;
	tmp2 = (const unsigned char*)s2;
	while (*tmp1 && *tmp2 && *tmp1 == *tmp2)
	{
		tmp1++;
		tmp2++;
	}
	return (*tmp1 - *tmp2);
}
