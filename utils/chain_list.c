/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:15:05 by aschaefe          #+#    #+#             */
/*   Updated: 2023/01/25 14:49:56 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_chain	*lst_new_block(int content)
{
	t_chain	*dest;

	dest = (t_chain *)malloc(sizeof(t_chain));
	if (! dest)
		return (NULL);
	dest->number = content;
	dest->next = NULL;
	return (dest);
}

void	lst_add_back(t_chain **lst, t_chain *new)
{
	t_chain	*tmp;

	tmp = *lst;
	if (! tmp)
		*lst = new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}
