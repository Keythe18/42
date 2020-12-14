/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:56:38 by aamzdour          #+#    #+#             */
/*   Updated: 2015/12/14 19:36:31 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char *ret;

	ret = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ret = (char*)s;
		s++;
	}
	if (*s == (char)c)
		ret = (char*)s;
	return (ret);
}
