/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenquin <shenquin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 18:08:15 by shenquin          #+#    #+#             */
/*   Updated: 2021/03/23 18:34:42 by shenquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void		ft_lstadd_back(t_list **alst, t_list *new)
{
	if (*alst = NULL)
	{
		*alst = new;
		return ;
	}
	else
	{
		while ((*alst)->next != NULL)
		{
			*alst = (*alst)->next;
		}
		(*alst)->next = new;
		new->next = NULL;
	}

}
