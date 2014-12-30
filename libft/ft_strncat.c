/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouchib <nbouchib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:43:53 by nbouchib          #+#    #+#             */
/*   Updated: 2014/11/27 13:10:03 by nbouchib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*str;

	str = s1;
	while (*str != '\0')
	{
		str++;
	}
	while (*s2 != '\0' && n > 0)
	{
		*str = *s2;
		str++;
		s2++;
		n--;
	}
	*str = '\0';
	return (s1);
}
