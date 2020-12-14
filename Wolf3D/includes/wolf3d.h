#ifndef WOLF3D_H
# define WOLF3D_H

# define HEIGHT		720
# define WIDTH		1280

# define RED		0xFF0000
# define GREEN		0x00FF00
# define BLUE		0x0000FF
# define BROWN		0x582900
# define SPEED		0.25
# define SSPEED		0.15
# define TURN_SPEED	0.05

# include "../libft/libft.h"
# include "../libft/get_next_line.h"
# include <math.h>
# include "../minilibx_macos/mlx.h"
# include <fcntl.h>
# include <stdio.h>

typedef	struct	s_env
{
	int			forward;
	int			back;
	int			right;
	int			left;
	int			sright;
	int			sleft;
	int			bpp;
	int			sl;
	int			end;
	int			x1;
	int			x2;
	int			y1;
	int			y2;
	double		e;
	int			dx;
	int			dy;
	int			x;
	int			**map;
	int			map_size;
	void		*mlx;
	void		*win;
	void		*img;
	char		*image;
	int			mapx;
	int			mapy;
	int			stepx;
	int			stepy;
	int			hit;
	int			side;
	int			lineheight;
	int			drawstart;
	int			drawend;
	int			color;
	double		movespeed;
	double		rotspeed;
	double		rayposx;
	double		rayposy;
	double		raydirx;
	double		raydiry;
	double		camerax;
	double		sidedistx;
	double		sidedisty;
	double		deltadistx;
	double		deltadisty;
	double		perpwalldist;
	double		posx;
	double		posy;
	double		olddirx;
	double		dirx;
	double		diry;
	double		planex;
	double		planey;
	double		time;
	double		oldtime;
	double		frametime;
}				t_env;

void			wolf3d_init(t_env *env);
void			draw_vertical_line(t_env *env, int x);
void			ray_loop(t_env *env);
void			get_map(char **av, t_env *env);
void			forward(t_env *e);
void			backward(t_env *e);
void			turn_right(t_env *e);
void			turn_left(t_env *e);
void			move_left(t_env *e);
void			move_right(t_env *e);

#endif
