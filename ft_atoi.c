/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 13:39:43 by shenquin          #+#    #+#             */
/*   Updated: 2020/01/21 13:12:11 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t			ft_atoi2(const char *str, int *sign)
{
	int		i;
	size_t	res;

	i = 0;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\r' || str[i] == '\t' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int						ft_atoi(const char *str)
{
	int		sign;
	size_t	res;

	sign = 1;
	res = ft_atoi2(str, &sign);
	if (res > 9223372036854775807)
	{
		if (sign == 1)
			return (-1);
		if (sign == -1)
			return (0);
	}
	return ((int)res * sign);
}
