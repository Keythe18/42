/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fpow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 00:56:37 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 17:01:37 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float		ft_fpow(float nb, int power)
{
	int		i;
	float	result;

	i = 0;
	result = 0;
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else if (power > 1)
	{
		result = nb;
		while (++i < power)
			result *= nb;
	}
	return (result);
}
