/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_or_less.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:03:13 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/23 14:29:25 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	only_2(t_data *data)
{
	if (data->p_a->index == 2)
		rotate_a(data, 1);
}

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
	rev_rotate_a(data, 1);
}

void	only_5(t_data *data)
{
	while (data->p_a->index != 5)
		rotate_a(data, 1);
	push_b(data, 1);
	while (data->p_a->index != 4)
		rotate_a(data, 1);
	push_b(data, 1);
	only_3(data);
	push_a(data, 1);
	push_a(data, 1);
	rev_rotate_a(data, 1);
	rev_rotate_a(data, 1);
}

void	five_or_less(t_data *data)
{
	if (data->nb_nbr == 2)
		only_2(data);
	if (data->nb_nbr == 3)
		only_3(data);
	if (data->nb_nbr == 4)
		only_4(data);
	if (data->nb_nbr == 5)
		only_5(data);
}
