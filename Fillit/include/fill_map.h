/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:45:27 by aamzdour          #+#    #+#             */
/*   Updated: 2016/01/20 19:17:31 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILL_MAP_H
# define FILL_MAP_H

# include "libft.h"
# include "t_fillit.h"
# include "fill_map_tab.h"

# define H f_data->t_list[index].height
# define W f_data->t_list[index].width

int			fill_map(t_fillit *f_data, int index);

#endif
