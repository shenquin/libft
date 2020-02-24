/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 17:21:39 by shenquin          #+#    #+#             */
/*   Updated: 2020/01/20 16:03:22 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strcat(char *dest, const char *src)
{
	int i;
	int t;

	i = 0;
	t = 0;
	while (dest[i])
		i++;
	while (src[t])
	{
		dest[i + t] = src[t];
		t++;
	}
	dest[i + t] = '\0';
	return (dest);
}

char			*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	int		size;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *)(malloc(sizeof(char *) * (size + 1)));
	if (!s3)
		return (NULL);
	s3[0] = '\0';
	ft_strcat(s3, s1);
	ft_strcat(s3, s2);
	s3[size] = '\0';
	return (s3);
}
