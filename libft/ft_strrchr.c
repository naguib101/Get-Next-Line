/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouchib <nbouchib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 18:13:02 by nbouchib          #+#    #+#             */
/*   Updated: 2014/11/11 09:56:46 by nbouchib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	k;

	i = ft_strlen(s);
	k = (char)c;
	while ((i != 0) && s[i] != k)
		i--;
	if (s[i] == k)
		return ((char*)&s[i]);
	return (NULL);
}
