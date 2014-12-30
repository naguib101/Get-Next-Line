/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouchib <nbouchib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 15:28:05 by nbouchib          #+#    #+#             */
/*   Updated: 2014/11/12 17:32:56 by nbouchib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_isspace(int c)
{
	c = (unsigned char)c;
	if ((c == ' ') || (c == '\n') || (c == '\t') || (c == '\v') || (c == '\f')
			|| (c == '\r'))
		return (1);
	return (0);
}

char	*ft_strtrim(const char *s)
{
	int				i;
	int				start;
	unsigned int	c;
	char			*scopy;

	i = 0;
	c = 0;
	start = 0;
	scopy = ft_strnew(ft_strlen(s));
	while (c < ft_strlen(s))
	{
		if (!start && ft_isspace(s[c]))
			c++;
		else
		{
			start = 1;
			scopy[i++] = s[c++];
		}
	}
	while (ft_isspace(scopy[--i]))
		scopy[i] = '\0';
	return (scopy);
}
