/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouchib <nbouchib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 20:01:45 by nbouchib          #+#    #+#             */
/*   Updated: 2014/11/11 20:06:15 by nbouchib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		result;
	int		minus;

	i = 0;
	minus = 1;
	result = 0;
	while ((str[i] == '\t') || (str[i] == '\v') || (str[i] == '\r') ||
			(str[i] == '\n') || (str[i] == '\f') || (str[i] == ' '))
		i++;
	if (str[0] == '-')
		minus = (-minus);
	while (str[i])
	{
		while ((str[i] >= '0') && (str[i] <= '9'))
			result = result * 10 + (str[i++] - '0');
		if (i != 0)
			return (result * minus);
		i++;
	}
	return (0);
}
