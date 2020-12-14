/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 01:10:20 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 19:16:57 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fatoi.h"

static double	ft_get_decimal(const char *str, int *i)
{
	double		digit;
	double		value;

	value = 0;
	*i = 0;
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		digit = (double)(*str - '0');
		value = (value * 10) + digit;
		str++;
		*i = *i + 1;
	}
	return (value);
}

static double	ft_char_to_double(const char *str, int positive, double value)
{
	double	digit;
	int		i;

	while ((*str != '.' && *str != '\0') && (*str >= '0' && *str <= '9'))
	{
		digit = (double)(*str - '0');
		value = (value * 10) + digit;
		str++;
	}
	if (*str == '.')
		value += (ft_get_decimal(++str, &i) / ft_fpow(10, i));
	if (!positive)
		value *= -1;
	return (value);
}

double			ft_fatoi(const char *str)
{
	double		value;
	int			positive;

	value = 0;
	positive = 1;
	while (DIFF_0 && (BLANK || BLANK_BIS))
		str++;
	if (((OP) && (DIFF_NDIGIT)) || ((DIFF_DIGIT) && (DIFF_OP)))
		return (0);
	else if (*str == '-')
	{
		positive = 0;
		str++;
	}
	else if (*str == '+')
		str++;
	return (ft_char_to_double(str, positive, value));
}
