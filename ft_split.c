/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 16:33:19 by shenquin          #+#    #+#             */
/*   Updated: 2020/01/16 18:27:19 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		malloc_size(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void		ft_free(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != NULL)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static char		*writestr(char const *s, char c, char **tab)
{
	size_t	i;
	char	*dest;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	dest = ft_substr(s, 0, i);
	if (dest == NULL)
		ft_free(tab);
	return (dest);
}

char			**ft_split(char const *s1, char c)
{
	int		i;
	int		j;
	int		count;
	char	**tab;

	i = 0;
	j = 0;
	count = 0;
	if (s1 == NULL)
		return (NULL);
	if (!(tab = malloc((malloc_size(s1, c) + 1) * sizeof(char *))))
		return (NULL);
	while (s1[i])
	{
		while (s1[i] == c)
			i++;
		if (s1[i] && s1[i] != c)
		{
			tab[j++] = writestr(&s1[i], c, tab);
			while (s1[i] && s1[i] != c)
				i++;
		}
	}
	tab[j] = NULL;
	return (tab);
}
