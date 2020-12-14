/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_prime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/15 03:00:22 by kmonrose          #+#    #+#             */
/*   Updated: 2013/12/17 14:24:35 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_next_prime(unsigned int n)
{
	unsigned int		m;
	int					bool;

	bool = 0;
	while (!bool)
	{
		n++;
		m = n - 1;
		while (m > 1 && bool == 0)
		{
			if ((n % m) == 0)
				bool = 1;
			m--;
		}
		if (bool == 0)
			return (n);
		else
			bool = 0;
	}
	return (0);
}
