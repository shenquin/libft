/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 17:28:30 by shenquin          #+#    #+#             */
/*   Updated: 2021/03/23 18:34:54 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void			ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst = NULL)
	{
		*alst = new;
		return ;
	}
	else
	{
		new->next = *alst;
		*alst = new;
	}
}
