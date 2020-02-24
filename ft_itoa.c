/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:38:51 by shenquin          #+#    #+#             */
/*   Updated: 2020/01/16 18:26:28 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			size_cal(long nb)
{
	int size;

	size = 1;
	if (nb < 0)
		size++;
	while (nb / 10)
	{
		size++;
		nb /= 10;
	}
	return (size + 1);
}

char				*ft_itoa(int nbr)
{
	char	*str;
	int		i;
	long	div;
	long	nb;

	nb = (long)nbr;
	if (!(str = (char *)malloc(size_cal(nb) * sizeof(char))))
		return (0);
	i = 0;
	if (nb < 0)
	{
		str[i++] = '-';
		nb *= -1;
	}
	div = 1;
	while (nb / div > 9)
		div *= 10;
	while (div)
	{
		str[i++] = nb / div + '0';
		nb = nb % div;
		div = div / 10;
	}
	str[i] = '\0';
	return (str);
}
