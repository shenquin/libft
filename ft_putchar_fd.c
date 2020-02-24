/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 14:44:23 by shenquin          #+#    #+#             */
/*   Updated: 2020/01/20 16:07:09 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putchar_fd(char c, int fd)
{
	unsigned char a;

	if (fd < 0)
		return ;
	a = (unsigned char)c;
	write(fd, &a, 1);
}
