/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 17:24:20 by aamzdour          #+#    #+#             */
/*   Updated: 2017/04/11 08:06:47 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 10

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		ft_error(int ac)
{
	if (ac == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (ft_error(ac))
		return (0);
	fd = open(av[1], O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		write(1, buf, ret);
	}
	close(fd);
	return (0);
}
