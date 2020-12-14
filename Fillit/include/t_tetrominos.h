/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_tetrominos.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:47:39 by aamzdour          #+#    #+#             */
/*   Updated: 2016/01/20 16:48:04 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_TETROMINOS_H
# define T_TETROMINOS_H

# include "t_pos.h"

typedef struct		s_tetrominos
{
	char			tetrominos[4][4];
	t_pos			pos;
	int				width;
	int				height;
}					t_tetrominos;

#endif
