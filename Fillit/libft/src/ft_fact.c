/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fact.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 17:52:38 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 18:03:14 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_fact(int nb)
{
	int			result;

	if (nb < 13)
	{
		result = nb;
		while (1 < --nb)
			result *= nb;
		return (result);
	}
	return (nb);
}
