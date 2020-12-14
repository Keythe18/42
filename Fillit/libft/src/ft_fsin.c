/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fsin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 18:55:21 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 18:55:27 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static float	ft_init(float x)
{
	if (x < -3.14159265)
		x += 6.28318531;
	else if (x > 3.14159265)
		x -= 6.28318531;
	return (x);
}

float			ft_fsin(float x)
{
	float		sin;

	sin = 0;
	x = ft_init(x);
	if (x < 0)
	{
		sin = 1.27323954 * x + 0.405284735 * x * x;
		if (sin < 0)
			sin = 0.225 * (sin * -sin - sin) + sin;
		else
			sin = 0.225 * (sin * sin - sin) + sin;
	}
	else
	{
		sin = 1.27323954 * x - 0.405284735 * x * x;
		if (sin < 0)
			sin = 0.225 * (sin * -sin - sin) + sin;
		else
			sin = 0.225 * (sin * sin - sin) + sin;
	}
	return (sin);
}
