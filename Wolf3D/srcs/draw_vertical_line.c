#include "../includes/wolf3d.h"

static int			getpos(int x, int y)
{
	if (x < 1 || x > WIDTH - 1 || y < 1 || y > HEIGHT - 1)
		return (-1);
	return (y * WIDTH + x);
}

static void			pix(t_env *env, int x, int y)
{
	int				index;

	env->image = mlx_get_data_addr(env->img, &(env->bpp),
				&(env->sl), &(env->end));
	index = getpos(x, y) * (env->bpp / 8);
	if (index >= 0)
	{
		env->image[index + 2] = env->color >> 16 & 0xff;
		env->image[index + 1] = env->color >> 8 & 0xff;
		env->image[index] = env->color & 0xff;
		env->image[index + 3] = 0;
	}
}

static void			draw(t_env *env, int x, int start, int end)
{
	int				i;

	i = start;
	while (i <= end)
	{
		pix(env, x, i);
		i++;
	}
}

void				draw_vertical_line(t_env *env, int x)
{
	int				colsave;

	colsave = env->color;
	draw(env, x, env->drawstart, env->drawend);
	env->color = 0xffffff;
	draw(env, x, 0, env->drawstart);
	env->color = 0x999999;
	draw(env, x, env->drawend, HEIGHT);
	env->color = colsave;
}
