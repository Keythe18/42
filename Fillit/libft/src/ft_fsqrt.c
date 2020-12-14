/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fsqrt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 19:50:35 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 19:52:12 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fsqrt.h"

float	ft_fsqrt(float nb)
{
	float	x0;
	float	x1;

	if (!nb)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		x0 = nb / 2;
		x1 = (x0 + nb / x0) / 2;
		while (ft_fabs(x1 - x0) >= ACCURACY)
		{
			x0 = x1;
			x1 = (x0 + nb / x0) / 2;
		}
	}
	return (x1);
}
