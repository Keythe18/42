/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:55:02 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/05 06:29:51 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	temp;

	if (n < 0)
	{
		write(1, "-", 1);
		temp = n * -1;
	}
	else
		temp = n;
	if (temp >= 10)
	{
		ft_putnbr(temp / 10);
		ft_putnbr(temp % 10);
	}
	else
	{
		ft_putchar('0' + temp);
	}
}
