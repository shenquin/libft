/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 14:03:24 by shenquin          #+#    #+#             */
/*   Updated: 2020/01/16 18:26:34 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict s1, const void *restrict s2, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*src;

	i = 0;
	src = (unsigned char*)s2;
	dest = (unsigned char*)s1;
	while (i < n)
	{
		dest[i] = src[i];
		if (dest[i] == (unsigned char)c)
			return ((void *)(s1 + i + 1));
		i++;
	}
	return (NULL);
}
