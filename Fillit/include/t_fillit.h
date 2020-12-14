/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_fillit.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:46:46 by aamzdour          #+#    #+#             */
/*   Updated: 2016/01/20 16:46:47 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_FILLIT_H
# define T_FILLIT_H

# include "t_tetrominos.h"

typedef struct		s_fillit
{
	int				nb_pieces;
	t_tetrominos	*t_list;
	char			**map;
	int				map_size;
}					t_fillit;

#endif
