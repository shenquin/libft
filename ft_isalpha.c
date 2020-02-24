/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 10:50:27 by shenquin          #+#    #+#             */
/*   Updated: 2020/01/16 18:26:09 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isalpha(int a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		return (1);
	return (0);
}