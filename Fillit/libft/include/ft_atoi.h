/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/24 19:39:23 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/14 19:02:23 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ATOI_H
# define FT_ATOI_H

# define DIFF_0 *str != '\0'
# define BLANK *str == ' ' || *str == '\t' || *str == '\n'
# define BLANK_BIS *str == '\v' || *str == '\f' || *str == '\r'
# define OP *str == '+' || *str == '-'
# define DIFF_OP *str != '+' && *str != '-'
# define DIFF_NDIGIT *(str + 1) < '0' || *(str + 1) > '9'
# define DIFF_DIGIT *str < '0' || *str > '9'

#endif
