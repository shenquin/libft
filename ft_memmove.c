/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 16:10:58 by shenquin          #+#    #+#             */
/*   Updated: 2020/01/20 14:04:13 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	if (src < dest)
		while (n)
		{
			n--;
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
		}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
