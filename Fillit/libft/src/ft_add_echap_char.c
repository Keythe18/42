/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_echap_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:15:33 by kmonrose          #+#    #+#             */
/*   Updated: 2016/01/20 17:17:49 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned int		get_new_str_size(char *s, char *char_to_echap)
{
	int					i;
	int					j;
	unsigned int		res;

	i = 0;
	res = ft_strlen(s);
	while (s[i] != '\0')
	{
		j = 0;
		while (char_to_echap[j] != '\0')
		{
			if (s[i] == char_to_echap[j])
			{
				res++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (res);
}

static void				add_echap_char(char *s, char c, char *ctoe, char *n_str)
{
	int					i;
	int					j;
	int					k;
	int					btrouve;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		j = 0;
		btrouve = 0;
		while (ctoe[j] != '\0')
		{
			if (s[i] == ctoe[j])
				btrouve = 1;
			j++;
		}
		if (btrouve)
		{
			n_str[k++] = c;
			n_str[k++] = s[i++];
		}
		else
			n_str[k++] = s[i++];
	}
}

char					*ft_add_echap_char(char *s, char c, char *char_to_echap)
{
	unsigned int		new_size;
	char				*res;

	if (s != NULL && char_to_echap != NULL)
	{
		new_size = get_new_str_size(s, char_to_echap) + 1;
		res = (char*)malloc(sizeof(char) * new_size);
		if (res != NULL)
		{
			ft_bzero(res, new_size);
			add_echap_char(s, c, char_to_echap, res);
		}
		return (res);
	}
	return (NULL);
}
