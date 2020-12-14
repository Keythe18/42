/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file_integrity.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:49:11 by aamzdour          #+#    #+#             */
/*   Updated: 2016/01/20 16:55:25 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_file_integrity.h"
#include "check_file_integrity_tab.h"

static int			process_eol(int tab[TAB_SIZE])
{
	if (EMPT_LI == 1)
	{
		if (NB_BLOC == 4 && NB_LINE == 4)
		{
			NB_COLU = 0;
			NB_LINE = 0;
			NB_BLOC = 0;
			EMPT_LI = 0;
			LAST_LI = 1;
			NB_TETR++;
		}
		else
			return (0);
	}
	else if (NB_COLU == 4)
	{
		NB_COLU = 0;
		NB_LINE++;
		EMPT_LI = 1;
	}
	else
		return (0);
	return (1);
}

int					check_file_integrity(int fd)
{
	int			tab[TAB_SIZE];
	char		c;

	ft_bzero(tab, sizeof(int) * TAB_SIZE);
	while ((RET = read(fd, &c, 1)) > 0)
	{
		if (c != '\n')
		{
			if (c != '.' && c != '#')
				return (0);
			LAST_LI = 0;
			EMPT_LI = 0;
			NB_COLU++;
			if (c == '#')
				NB_BLOC++;
		}
		else
		{
			if (!process_eol(tab))
				return (0);
		}
	}
	if (LAST_LI == 0 && (NB_BLOC == 4 && NB_LINE == 4))
		return (++NB_TETR);
	return (0);
}
