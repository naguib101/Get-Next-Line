/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouchib <nbouchib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 15:12:04 by nbouchib          #+#    #+#             */
/*   Updated: 2014/11/15 15:29:03 by nbouchib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_nb_words(char const *s, char c)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			j++;
			i++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (j);
}

static char		*add_word(size_t *i, char const *s, char c)
{
	size_t		size;
	size_t		j;
	char		*word;

	size = *i;
	j = 0;
	while (s[size] && s[size] != c)
		size++;
	word = ft_strnew(size - *i);
	if (word)
	{
		while (*i < size)
		{
			word[j] = s[*i];
			j++;
			*i += 1;
		}
		return (word);
	}
	return (0);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	tab = NULL;
	if (s)
		tab = (char **)malloc(sizeof(char *) * (count_nb_words(s, c) + 1));
	if (tab)
	{
		while (j < count_nb_words(s, c))
		{
			while (s[i] == c)
				i += 1;
			if (s[i] != c && s[i])
				tab[j++] = add_word(&i, s, c);
		}
		tab[j] = 0;
		return (tab);
	}
	return (0);
}
