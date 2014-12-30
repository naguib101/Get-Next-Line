/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouchib <nbouchib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 11:06:40 by nbouchib          #+#    #+#             */
/*   Updated: 2014/11/13 17:29:46 by nbouchib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlink;

	newlink = (t_list *)malloc(sizeof(t_list));
	if (newlink == NULL)
		return (NULL);
	if (content == NULL)
	{
		newlink->content = NULL;
		newlink->content_size = 0;
	}
	else
	{
		newlink->content = malloc(sizeof(content));
		if (newlink->content == NULL)
			return (NULL);
		ft_memcpy((newlink->content), content, sizeof(content_size));
		newlink->content_size = content_size;
	}
	newlink->next = NULL;
	return (newlink);
}
