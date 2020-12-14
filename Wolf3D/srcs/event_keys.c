#include "../includes/wolf3d.h"

void	forward(t_env *env)
{
	if (!(env->map)[(int)(env->posx + env->dirx * SPEED)][(int)env->posy])
		env->posx += env->dirx * SPEED;
	if (!(env->map)[(int)(env->posx)][(int)(env->posy + env->diry * SPEED)])
		env->posy += env->diry * SPEED;
}

void	backward(t_env *env)
{
	if (!(env->map)[(int)(env->posx - env->dirx * SPEED)][(int)env->posy])
		env->posx -= env->dirx * SPEED;
	if (!(env->map)[(int)(env->posx)][(int)(env->posy - env->diry * SPEED)])
		env->posy -= env->diry * SPEED;
}

void	turn_right(t_env *env)
{
	double	dx;
	double	px;

	dx = env->dirx;
	env->dirx = env->dirx * cos(-TURN_SPEED) - env->diry * sin(-TURN_SPEED);
	env->diry = dx * sin(-TURN_SPEED) + env->diry * cos(-TURN_SPEED);
	px = env->planex;
	env->planex = env->planex * cos(-TURN_SPEED) - env->planey *
		sin(-TURN_SPEED);
	env->planey = px * sin(-TURN_SPEED) + env->planey *
		cos(-TURN_SPEED);
}

void	turn_left(t_env *env)
{
	double	dx;
	double	px;

	dx = env->dirx;
	env->dirx = env->dirx * cos(TURN_SPEED) - env->diry * sin(TURN_SPEED);
	env->diry = dx * sin(TURN_SPEED) + env->diry * cos(TURN_SPEED);
	px = env->planex;
	env->planex = env->planex * cos(TURN_SPEED) - env->planey * sin(TURN_SPEED);
	env->planey = px * sin(TURN_SPEED) + env->planey * cos(TURN_SPEED);
}
