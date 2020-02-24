/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:27:19 by shenquin          #+#    #+#             */
/*   Updated: 2020/01/16 18:28:01 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!to_find[0])
		return ((char*)str);
	while (str[i] && i < len)
	{
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && to_find[j] && str[i + j]
	&& (i + j) < len)
				j++;
			if (to_find[j] == '\0')
				return ((char*)str + i);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
