/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:31:40 by shenquin          #+#    #+#             */
/*   Updated: 2020/01/20 16:07:57 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void			ft_putnbr_fd(int nb, int fd)
{
	int div;
	int mod;

	if (fd < 0)
		return ;
	if (nb < 0)
	{
		ft_putchar('-', fd);
		if (nb == -2147483648)
		{
			write(fd, "2147483648", 10);
			return ;
		}
		nb *= -1;
	}
	div = nb / 10;
	mod = nb % 10;
	if (div != 0)
		ft_putnbr_fd(div, fd);
	ft_putchar(mod + 48, fd);
}
