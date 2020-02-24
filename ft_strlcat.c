/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 17:32:29 by shenquin          #+#    #+#             */
/*   Updated: 2020/01/16 18:27:41 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t l_src;
	size_t l_dest;

	l_src = ft_strlen(src);
	l_dest = ft_strlen(dest);
	if (size <= l_dest)
		return (l_src + size);
	i = 0;
	while (src[i] && l_dest + i < size - 1)
	{
		dest[l_dest + i] = src[i];
		i++;
	}
	dest[l_dest + i] = '\0';
	return (l_src + l_dest);
}
