#include "../includes/wolf3d.h"

void		move_right(t_env *env)
{
	double	xsave;
	double	ysave;

	xsave = env->dirx;
	ysave = env->diry;
	env->dirx = xsave * cos(-M_PI_2) - ysave * sin(-M_PI_2);
	env->diry = xsave * sin(-M_PI_2) + ysave * cos(-M_PI_2);
	if (!(env->map)[(int)(env->posx + env->dirx * SSPEED)][(int)env->posy])
		env->posx += env->dirx * SSPEED;
	if (!(env->map)[(int)(env->posx)][(int)(env->posy + env->diry * SSPEED)])
		env->posy += env->diry * SSPEED;
	env->dirx = xsave;
	env->diry = ysave;
}

void		move_left(t_env *env)
{
	double	xsave;
	double	ysave;

	xsave = env->dirx;
	ysave = env->diry;
	env->dirx = xsave * cos(M_PI_2) - ysave * sin(M_PI_2);
	env->diry = xsave * sin(M_PI_2) + ysave * cos(M_PI_2);
	if (!(env->map)[(int)(env->posx + env->dirx * SSPEED)][(int)env->posy])
		env->posx += env->dirx * SSPEED;
	if (!(env->map)[(int)(env->posx)][(int)(env->posy + env->diry * SSPEED)])
		env->posy += env->diry * SSPEED;
	env->dirx = xsave;
	env->diry = ysave;
}
