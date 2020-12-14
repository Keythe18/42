/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:32:27 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/05 06:28:51 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	char		*m;

	i = 0;
	m = (char*)b;
	while (i < len)
	{
		m[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
