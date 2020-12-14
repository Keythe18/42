/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:46:00 by aamzdour          #+#    #+#             */
/*   Updated: 2015/12/15 18:00:34 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t				i;
	const unsigned char *p1 = (const unsigned char*)s1;
	const unsigned char *p2 = (const unsigned char*)s2;

	i = 0;
	while (p1[i] == p2[i] && p1[i] && p2[i])
		i++;
	return (p1[i] - p2[i]);
}
