/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fatoi.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 01:23:00 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 19:17:30 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FATOI_H
# define FT_FATOI_H

# include <libft.h>

# define DIFF_0 *str != 0
# define BLANK *str == ' ' || *str == '\t' || *str == '\n'
# define BLANK_BIS *str == '\v' || *str == '\f' || *str == '\r'
# define OP *str == '+' || *str == '-'
# define DIFF_OP *str != '+' && *str != '-'
# define DIFF_NDIGIT *(str + 1) < '0' || *(str + 1) > '9'
# define DIFF_DIGIT *str < '0' || *str > '9'

#endif
