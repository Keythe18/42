#include "../includes/wolf3d.h"

static	char	**getfield(int fd)
{
	char		**res;
	char		buf[20];
	char		*line;
	char		*tmp;
	int			ret;

	res = NULL;
	line = NULL;
	while ((ret = read(fd, buf, 21)) > 0)
	{
		buf[ret] = '\0';
		tmp = line;
		line = ft_strjoin(tmp, buf);
		ft_strdel(&tmp);
	}
	res = ft_strsplit(line, '\n');
	ft_strdel(&line);
	return (res);
}

static	int		ft_tablen(char **tab)
{
	int			i;

	i = 0;
	while (tab && tab[i])
		i++;
	return (i);
}

static	int		**convert(char **tab)
{
	int			**res;
	int			i;
	int			j;

	i = 0;
	res = NULL;
	res = malloc(sizeof(int*) * ft_tablen(tab));
	while (i < ft_tablen(tab))
	{
		j = 0;
		res[i] = malloc(sizeof(int) * ft_strlen(tab[i]));
		while (j < ft_strlen(tab[i]))
		{
			res[i][j] = tab[i][j] - '0';
			j++;
		}
		i++;
	}
	return (res);
}

void			get_map(char **av, t_env *env)
{
	char		**tab;
	int			i;
	int			fd;

	fd = 0;
	if ((fd = open(av[1], O_RDONLY)) == -1)
	{
		perror(av[1]);
		exit (EXIT_FAILURE);
	}
	i = 0;
	env->map_size = 20;
	tab = getfield(fd);
	env->map = convert(tab);
	while (tab && tab[i])
	{
		free(tab[i]);
		i++;
	}
	close (fd);
}
