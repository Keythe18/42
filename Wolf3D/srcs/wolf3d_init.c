/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/30 18:45:32 by hnguyen           #+#    #+#             */
/*   Updated: 2015/04/02 16:03:53 by hnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

void		wolf3d_init(t_env *env)
{
	env->posx = 10;
	env->posy = 10;
	env->dirx = 1.0;
	env->diry = 0.0;
	env->planex = 0.0;
	env->planey = 0.66;
	env->time = 0;
	env->oldtime = 0;
	env->hit = 0;
	env->x = 0;
}
