/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouchib <nbouchib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:37:59 by nbouchib          #+#    #+#             */
/*   Updated: 2014/11/10 15:24:15 by nbouchib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*save;

	save = (char*)malloc(sizeof(char) * len);
	save = ft_strncpy(save, src, len);
	dst = ft_strncpy(dst, save, len);
	free(save);
	return (dst);
}
