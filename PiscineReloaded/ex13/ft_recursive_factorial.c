/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 09:15:04 by aamzdour          #+#    #+#             */
/*   Updated: 2017/04/11 07:56:55 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	f;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		f = ft_recursive_factorial(nb - 1);
		if ((nb * f) / nb != f)
			return (0);
		return (nb * f);
	}
}
