/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_or_less.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:03:13 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/25 13:24:27 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	only_2(t_data *data)
{
	if (data->p_a->index == 2)
		rotate_a(data, 1);
}

void	only_3(t_data *data, int more)
{
	struct s_c_list	*tmp_next;

	tmp_next = data->p_a->next;
	if (data->p_a->index == (1 + more))
	{
		if (tmp_next->index == (3 + more))
		{
			swap_a(data, 1);
			rotate_a(data, 1);
		}
	}
	else if (data->p_a->index == (2 + more))
	{
		swap_a(data, 1);
		if (data->p_a->index == (3 + more))
			rotate_a(data, 1);
	}
	else
	{
		rotate_a(data, 1);
		if (data->p_a->index == (2 + more))
			swap_a(data, 1);
	}
}

void	only_4(t_data *data, int from_five)
{
	struct s_c_list	*tmp;

	tmp = data->p_a;
	while (tmp->next)
		tmp = tmp->next;
	if (tmp->index == (1 + from_five))
		rev_rotate_a(data, 1);
	else
	{
		while (data->p_a->index != (1 + from_five))
			rotate_a(data, 1);
	}
	push_b(data, 1);
	only_3(data, (1 + from_five));
	push_a(data, 1);
}

void	only_5(t_data *data)
{
	struct s_c_list	*tmp;

	tmp = data->p_a;
	while (tmp->next)
		tmp = tmp->next;
	if (tmp->index == 1)
		rev_rotate_a(data, 1);
	else
	{
		while (data->p_a->index != 1)
			rotate_a(data, 1);
	}
	push_b(data, 1);
	only_4(data, 1);
	push_a(data, 1);
}
/* 
void	only_3(t_data *data)
{
	if (data->p_a->index == 1)
	{
		push_b(data, 1);
		if (data->p_a->index == 3)
			rotate_a(data, 1);
		push_a(data, 1);
	}
	if (data->p_a->index == 2)
	{
		swap_a(data, 1);
		if (data->p_a->index == 3)
		{
			rotate_a(data, 1);
			swap_a(data, 1);
		}
	}
	if (data->p_a->index == 3)
	{
		rotate_a(data, 1);
		if (data->p_a->index == 2)
			swap_a(data, 1);
	}
}

void	only_4(t_data *data)
{
	while (data->p_a->index != 4)
		rotate_a(data, 1);
	push_b(data, 1);
	only_3(data);
	push_a(data, 1);
	rotate_a(data, 1);
}

void	only_5(t_data *data)
{
	while (data->p_a->index != 4)
		rotate_a(data, 1);
	push_b(data, 1);
	while (data->p_a->index != 5)
		rotate_a(data, 1);
	push_b(data, 1);
	only_3(data, 2);
	push_a(data, 1);
	push_a(data, 1);
	rotate_a(data, 1);
	rotate_a(data, 1);
}
*/

void	five_or_less(t_data *data)
{
	if (data->nb_nbr == 2)
		only_2(data);
	if (data->nb_nbr == 3)
		only_3(data, 0);
	if (data->nb_nbr == 4)
		only_4(data, 0);
	if (data->nb_nbr == 5)
		only_5(data);
}
