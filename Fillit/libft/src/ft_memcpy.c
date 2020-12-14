/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:56:13 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/05 06:35:28 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	void	*ret;

	ret = s1;
	while (n--)
	{
		*(char*)s1 = *(char*)s2;
		s1++;
		s2++;
	}
	return (ret);
}
