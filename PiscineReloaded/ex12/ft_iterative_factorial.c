/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 08:55:51 by aamzdour          #+#    #+#             */
/*   Updated: 2017/04/11 07:57:17 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;
	int fn;

	i = 1;
	f = 1;
	fn = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		fn = f * i;
		if (fn / i != f)
			return (0);
		i++;
		f = fn;
	}
	return (f);
}
