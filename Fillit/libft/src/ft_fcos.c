/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fcos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 18:55:38 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 19:04:44 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static float	ft_init(float x)
{
	if (x < -3.14159265)
		x += 6.28318531;
	else if (x > 3.14159265)
		x -= 6.28318531;
	x += 1.57079632;
	if (x > 3.14159265)
		x -= 6.28318531;
	return (x);
}

float			ft_fcos(float x)
{
	float		cos;

	cos = 1;
	x = ft_init(x);
	if (x < 0)
	{
		cos = 1.27323954 * x + 0.405284735 * x * x;
		if (cos < 0)
			cos = 0.225 * (cos * -cos - cos) + cos;
		else
			cos = 0.225 * (cos * cos - cos) + cos;
	}
	else
	{
		cos = 1.27323954 * x - 0.405284735 * x * x;
		if (cos < 0)
			cos = 0.225 * (cos * -cos - cos) + cos;
		else
			cos = 0.225 * (cos * cos - cos) + cos;
	}
	return (cos);
}
