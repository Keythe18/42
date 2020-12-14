/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 14:51:10 by aamzdour          #+#    #+#             */
/*   Updated: 2017/04/09 03:08:46 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		j;

	j = 0;
	while (str[j])
		j++;
	return (j);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	char	*temp;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	temp = dest;
	while (*str)
		*(temp++) = *(str++);
	*temp = '\0';
	return (dest);
}
