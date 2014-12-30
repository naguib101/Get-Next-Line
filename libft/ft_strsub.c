/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouchib <nbouchib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 12:11:49 by nbouchib          #+#    #+#             */
/*   Updated: 2014/11/12 17:38:43 by nbouchib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*cut;
	unsigned int	i;

	i = 0;
	cut = ft_strnew(len + 1);
	if ((s == NULL) || (cut == NULL))
		return (NULL);
	while (i < len + start)
	{
		if (i >= start)
		{
			cut[i - start] = s[i];
		}
		i++;
	}
	return (cut);
}
