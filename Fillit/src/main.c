/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:49:52 by aamzdour          #+#    #+#             */
/*   Updated: 2018/03/15 13:31:20 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int			launch_algo(t_fillit *fdata, char *f)
{
	int		ret;

	ret = 0;
	fdata->map = NULL;
	fdata->map_size = 0;
	fdata->t_list = get_tetrominos(f, fdata->nb_pieces);
	if (fdata->t_list != NULL)
	{
		ret = resolve_fillit(fdata);
		free_fdata(fdata);
	}
	return (ret);
}

int					main(int ac, char **av)
{
	int				ret;
	int				fd;
	t_fillit		fdata;

	ret = 0;
	if (ac != 2)
	{
		ft_putendl("Example usage : \n ./fillit [Tetrominos file]");
		return (0);
	}
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd != -1)
		{
			fdata.nb_pieces = check_file_integrity(fd);
			if (fdata.nb_pieces > 0 && fdata.nb_pieces <= 26)
				ret = launch_algo(&fdata, av[1]);
		}
	}
	if (ret != 1)
		ft_putendl("error");
	return (0);
}
