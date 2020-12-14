/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:59:01 by aamzdour          #+#    #+#             */
/*   Updated: 2015/12/04 23:47:49 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v');
}

static int			first_non_space_char(const char *s)
{
	int i;

	i = 0;
	while (is_space(s[i]) || s[i] == '\r' || s[i] == '\f')
		++i;
	return (i);
}

int					ft_atoi(const char *str)
{
	int		i;
	int		to_return;
	int		neg;

	i = first_non_space_char(str);
	to_return = 0;
	neg = 0;
	if (str[i] == '-')
	{
		neg = 1;
		++i;
	}
	else if (str[i] == '+')
		++i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		to_return = to_return * 10;
		to_return += str[i] - '0';
		++i;
	}
	if (neg)
		to_return = -to_return;
	return (to_return);
}
