/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tetrominos.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamzdour <alexis.amzdour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:46:06 by aamzdour          #+#    #+#             */
/*   Updated: 2016/01/20 16:46:07 by aamzdour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_TETROMINOS_H
# define GET_TETROMINOS_H

# include "libft.h"
# include "t_tetrominos.h"
# include "print_tetrominos.h"
# include "valid_tetrominos.h"

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

t_tetrominos		*get_tetrominos(char *filename, int nb_pieces);

#endif
