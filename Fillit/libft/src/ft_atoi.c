/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:40:46 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 19:02:19 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.h"

static int	ft_char_to_integer(const char *str, int positive, int value)
{
	int		digit;

	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		digit = (int)(*str - '0');
		value = (value * 10) + digit;
		str++;
	}
	if (positive == 0)
		value = value * -1;
	return (value);
}

int			ft_atoi(const char *str)
{
	int		value;
	int		positive;

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
	return (ft_char_to_integer(str, positive, value));
}
