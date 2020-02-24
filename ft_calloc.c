/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 17:51:01 by shenquin          #+#    #+#             */
/*   Updated: 2020/01/16 18:26:03 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t nmemb, size_t size)
{
	void *memory;

	memory = (void *)malloc(nmemb * size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, (nmemb * size));
	return (memory);
}
