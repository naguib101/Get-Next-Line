/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouchib <nbouchib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:33:30 by nbouchib          #+#    #+#             */
/*   Updated: 2014/11/27 13:04:34 by nbouchib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int		i;
	unsigned char		*p;

	i = 0;
	p = (unsigned char*)s;
	if (s && n > 0)
	{
		while (i < n)
		{
			if (p[i] == (unsigned char)c)
				return ((void*)(p + i));
			i++;
		}
	}
	return (NULL);
}
