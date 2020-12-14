/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str3join.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 11:17:32 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 19:54:35 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str3join.h"

static char	*ft_copy_join(const char *s1,
						const char *s2,
						const char *s3,
						char *copy)
{
	int		tab[3];

	C1 = 0;
	C2 = 0;
	C3 = 0;
	while (s1[C1] != '\0')
	{
		copy[C1] = s1[C1];
		C1++;
	}
	while (s2[C2] != '\0')
	{
		copy[C1] = s2[C2];
		C1++;
		C2++;
	}
	while (s3[C3] != '\0')
	{
		copy[C1] = s3[C3];
		C1++;
		C3++;
	}
	copy[C1] = '\0';
	return (copy);
}

char		*ft_str3join(const char *s1,
						const char *s2,
						const char *s3)
{
	char	*scat;
	char	*cmp_null;
	int		len;

	len = 0;
	cmp_null = NULL;
	if (cmp_null != s1 && cmp_null != s2 && cmp_null != s3)
	{
		len = (ft_strlen(s1) + ft_strlen(s2) + ft_strlen(s3)) + 1;
		scat = (char*)malloc(sizeof(char) * len);
		scat = ft_copy_join(s1, s2, s3, scat);
		return (scat);
	}
	return ((char*)s1);
}
