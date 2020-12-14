/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmonrose <kmonrose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 02:28:26 by kmonrose          #+#    #+#             */
/*   Updated: 2015/12/05 06:30:37 by kmonrose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_copy(void *ptr, char *new_ptr, int old)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = ptr;
	while (i < old)
	{
		new_ptr[i] = tmp[i];
		i++;
	}
	return (new_ptr);
}

void		*ft_realloc(void *ptr, int old, int new)
{
	char	*new_ptr;

	if (new == 0)
	{
		if (ptr)
			free(ptr);
		return (NULL);
	}
	else if (!ptr)
		return (malloc(new));
	if (old < new)
	{
		if ((new_ptr = malloc(new)) == NULL)
			return (NULL);
		new_ptr = ft_copy(ptr, new_ptr, old);
		free(ptr);
		return (new_ptr);
	}
	else
		return (ptr);
}
