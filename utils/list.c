/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:06:39 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/01 16:39:02 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_c_list	*ft_c_lstnew(int content)
{
	t_c_list	*dest;

	dest = (t_c_list *)malloc(sizeof(t_c_list));
	if (! dest)
		return (NULL);
	dest->content = content;
	dest->next = NULL;
	return (dest);
}

void	ft_c_lstadd_back(t_c_list **lst, t_c_list *new)
{
	t_c_list	*tmp;

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