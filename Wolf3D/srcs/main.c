/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/30 18:24:11 by hnguyen           #+#    #+#             */
/*   Updated: 2015/04/02 19:17:17 by hnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

int			expose_hook(t_env *env)
{
	mlx_put_image_to_window(env->mlx, env->win, env->img, 0, 0);
	return (0);
}

int			appui(int keycode, t_env *g)
{
	if (keycode == 53)
	{
		mlx_destroy_image(g->mlx, g->img);
		exit(0);
	}
	if (keycode == 13)
		g->forward = 1;
	else if (keycode == 1)
		g->back = 1;
	if (keycode == 123)
		g->right = 1;
	else if (keycode == 124)
		g->left = 1;
	if (keycode == 2)
		g->sleft = 1;
	else if (keycode == 0)
		g->sright = 1;
	return (0);
}

int			relac(int keycode, t_env *g)
{
	if (keycode == 13)
		g->forward = 0;
	else if (keycode == 1)
		g->back = 0;
	if (keycode == 123)
		g->right = 0;
	else if (keycode == 124)
		g->left = 0;
	if (keycode == 2)
		g->sleft = 0;
	else if (keycode == 0)
		g->sright = 0;
	return (0);
}

int			key_loop(t_env *g)
{
	if (g->forward)
		forward(g);
	if (g->back)
		backward(g);
	if (g->right)
		turn_right(g);
	if (g->left)
		turn_left(g);
	if (g->sleft)
		move_left(g);
	if (g->sright)
		move_right(g);
	ray_loop(g);
	mlx_put_image_to_window(g->mlx, g->win, g->img, 0, 0);
	return (0);
}

int			main(int ac, char **av)
{
	t_env	env;

	wolf3d_init(&env);
	if (ac != 2)
	{
		ft_putendl("usage: ./wolf3d map[X]"); return (0);
	}
	if ((env.mlx = mlx_init()) == NULL)
	{
		ft_putendl_fd("J'ai pas segfault!", 2);
		exit(EXIT_FAILURE);
	}
	get_map(av, &env);
	env.win = mlx_new_window(env.mlx, WIDTH, HEIGHT, "Wolf3d");
	env.img = mlx_new_image(env.mlx, WIDTH, HEIGHT);
	if (env.map)
		ray_loop(&env);
	else
		exit(EXIT_FAILURE);
	mlx_hook(env.win, 2, (1L << 0), &appui, &env);
	mlx_hook(env.win, 3, (1L << 1), &relac, &env);
	mlx_loop_hook(env.mlx, &key_loop, &env);
	mlx_expose_hook(env.win, expose_hook, &env);
	mlx_loop(env.mlx);
	return (0);
}
