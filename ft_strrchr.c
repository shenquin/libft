/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 14:10:20 by shenquin          #+#    #+#             */
/*   Updated: 2020/01/16 18:28:05 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char*)s + ft_strlen(s));
	while (i >= 0)
	{
		if (s[i] == (const char)c)
			return ((char*)&s[i]);
		i--;
	}
	return (NULL);
}
