/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouchib <nbouchib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 09:31:45 by nbouchib          #+#    #+#             */
/*   Updated: 2014/11/09 12:39:47 by nbouchib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	i;
	int				a;
	char			*k;

	k = (char *)b;
	i = c;
	a = 0;
	while (len != 0)
	{
		k[a] = i;
		len--;
		a++;
	}
	return (k);
}
