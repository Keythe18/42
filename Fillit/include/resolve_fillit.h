/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_fillit.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:46:34 by aamzdour          #+#    #+#             */
/*   Updated: 2016/01/20 19:19:00 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESOLVE_FILLIT_H
# define RESOLVE_FILLIT_H

# include "t_fillit.h"
# include "fill_map.h"
# include "init_map.h"
# include "print_map.h"

# define MAX_ITER 50

int		resolve_fillit(t_fillit *f_data);

#endif
