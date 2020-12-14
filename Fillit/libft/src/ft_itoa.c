/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 13:04:06 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 22:13:07 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_count_digit(int *nbdigit, int n)
{
	if (n < 0)
		*nbdigit = *nbdigit + 1;
	while (n >= 10 || n <= -10)
	{
		*nbdigit = *nbdigit + 1;
		n = n / 10;
	}
	return (*nbdigit + 1);
}

static char	*ft_strrev_itoa(char *str)
{
	int		i;
	int		size;
	char	tmp;

	i = 0;
	size = ft_strlen(str) - 1;
	if (str[i] == '-')
		i++;
	while (i < size)
	{
		tmp = str[i];
		str[i] = str[size];
		str[size] = tmp;
		i = i + 1;
		size = size - 1;
	}
	return (str);
}

static char	*ft_p_int_to_char(char *str,
							int *j,
							int *nbdigit,
							unsigned int n)
{
	unsigned int	temp;
	int				i;

	temp = n;
	i = 1;
	while (*nbdigit > 0)
	{
		temp = n / i;
		str[*j] = (char)((temp % 10) + '0');
		i = i * 10;
		*j = *j + 1;
		*nbdigit = *nbdigit - 1;
	}
	str[*j] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	int					nbdigit;
	int					j;
	unsigned int		temp;
	char				*str;

	nbdigit = 0;
	j = 0;
	nbdigit = ft_count_digit(&nbdigit, n);
	if ((str = (char*)malloc(sizeof(char) * (nbdigit + 1))) != NULL)
	{
		if (n < 0)
		{
			str[j] = '-';
			nbdigit--;
			temp = -n;
			j++;
		}
		else
			temp = n;
		return (ft_strrev_itoa(ft_p_int_to_char(str, &j, &nbdigit, temp)));
	}
	return (NULL);
}
