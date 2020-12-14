/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/31 15:24:22 by hnguyen           #+#    #+#             */
/*   Updated: 2015/04/02 18:44:53 by hnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

static	void		raycasting(t_env *env)
{
	env->camerax = 2 * env->x / (double)WIDTH - 1;
	env->rayposx = env->posx;
	env->rayposy = env->posy;
	env->raydirx = env->dirx + env->planex * env->camerax;
	env->raydiry = env->diry + env->planey * env->camerax;
	env->mapx = (int)env->rayposx;
	env->mapy = (int)env->rayposy;
	env->deltadistx = sqrt(1 + (env->raydiry * env->raydiry) /
						(env->raydirx * env->raydirx));
	env->deltadisty = sqrt(1 + (env->raydirx * env->raydirx) /
						(env->raydiry * env->raydiry));
	env->hit = 0;
}

static	void		step(t_env *env)
{
	if (env->raydirx < 0)
	{
		env->stepx = -1;
		env->sidedistx = (env->rayposx - env->mapx) * env->deltadistx;
	}
	else
	{
		env->stepx = 1;
		env->sidedistx = (env->mapx + 1.0 - env->rayposx) * env->deltadistx;
	}
	if (env->raydiry < 0)
	{
		env->stepy = -1;
		env->sidedisty = (env->rayposy - env->mapy) * env->deltadisty;
	}
	else
	{
		env->stepy = 1;
		env->sidedisty = (env->mapy + 1.0 - env->rayposy) * env->deltadisty;
	}
}

static	void		dda(t_env *env)
{
	while (env->hit == 0)
	{
		if (env->sidedistx < env->sidedisty)
		{
			env->sidedistx += env->deltadistx;
			env->mapx += env->stepx;
			env->side = 0;
		}
		else
		{
			env->sidedisty += env->deltadisty;
			env->mapy += env->stepy;
			env->side = 1;
		}
		if (env->map[env->mapx][env->mapy] > 0)
			env->hit = 1;
	}
}

static	void		distance(t_env *env)
{
	if (env->side == 0)
		env->perpwalldist = fabs(((double)env->mapx - env->rayposx +
					(1 - (double)env->stepx) / 2) / env->raydirx);
	else
		env->perpwalldist = fabs(((double)env->mapy - env->rayposy +
					(1 - (double)env->stepy) / 2) / env->raydiry);
	env->perpwalldist = (env->perpwalldist == 0) ? 0.000001 : env->perpwalldist;
	env->lineheight = abs((int)(HEIGHT / env->perpwalldist));
	env->drawstart = (int)(-(env->lineheight) / 2 + HEIGHT / 2);
	if (env->drawstart < 0)
		env->drawstart = 0;
	env->drawend = (int)(env->lineheight / 2 + HEIGHT / 2);
	if (env->drawend >= HEIGHT)
		env->drawend = HEIGHT - 1;
	if (env->side == 0 && (int)env->posx >= env->mapx)
		env->color = RED;
	else if (env->side == 0 && (int)env->posx < env->mapx)
		env->color = GREEN;
	else if (env->side == 1 && (int)env->posy >= env->mapy)
		env->color = BLUE;
	else if (env->side == 1 && (int)env->posy < env->mapy)
		env->color = BROWN;
}

void				ray_loop(t_env *env)
{
	int				ix;

	ix = 0;
	while (ix < WIDTH)
	{
		env->x = ix;
		raycasting(env);
		step(env);
		dda(env);
		distance(env);
		draw_vertical_line(env, env->x);
		ix++;
	}
}
