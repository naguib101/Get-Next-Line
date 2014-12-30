/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouchib <nbouchib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:05:30 by nbouchib          #+#    #+#             */
/*   Updated: 2014/11/10 13:05:20 by nbouchib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*keep;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = dst;
	s2 = (unsigned char *)src;
	i = 0;
	keep = (void*)malloc(sizeof(char) * ft_strlen(dst));
	keep = dst;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (keep);
}
