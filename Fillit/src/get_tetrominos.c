/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tetrominos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:49:36 by aamzdour          #+#    #+#             */
/*   Updated: 2016/01/20 19:25:37 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_tetrominos.h"
#include "get_tetrominos_tab.h"

static int		get_block(t_tetrominos *tlist, int tab[TAB_SIZE], char c, int n)
{
	if (NB_TETR <= n && X <= 4 && Y <= 4)
	{
		if (c == '#')
			tlist[NB_TETR].tetrominos[X][Y] = 'A' + NB_TETR;
		else
			tlist[NB_TETR].tetrominos[X][Y] = '.';
	}
	else
		return (0);
	EMPT_LI = 0;
	X++;
	return (1);
}

static int		fill_t_list(int fd, t_tetrominos *t_list, int nb_pieces)
{
	char			c;
	int				tab[TAB_SIZE];

	ft_bzero(tab, sizeof(int) * TAB_SIZE);
	while ((RET = read(fd, &c, 1)) > 0)
	{
		if (c == '\n')
		{
			Y++;
			X = 0;
			if (EMPT_LI == 1)
			{
				NB_TETR++;
				Y = 0;
			}
			EMPT_LI = 1;
		}
		else
		{
			if (!get_block(t_list, tab, c, nb_pieces))
				return (-1);
		}
	}
	return (1);
}

t_tetrominos	*get_tetrominos(char *filename, int nb_pieces)
{
	t_tetrominos	*t_list;
	int				fd;

	t_list = (t_tetrominos*)malloc(sizeof(t_tetrominos) * nb_pieces);
	if (t_list != NULL)
	{
		fd = open(filename, O_RDONLY);
		if (fd != -1)
		{
			if (fill_t_list(fd, t_list, nb_pieces) == 1)
			{
				if (valid_tetrominos(t_list, nb_pieces))
					return (t_list);
			}
		}
	}
	return (NULL);
}
