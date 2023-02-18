/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:06:39 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/17 15:31:10 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_data *data, int print)
{
	struct s_c_list	*tmp_next_b;
	struct s_c_list	*tmp_a;

	if (data->p_b)
	{
		tmp_a = data->p_a;
		tmp_next_b = data->p_b->next;
		data->p_a = data->p_b;
		data->p_b = tmp_next_b;
		data->p_a->next = tmp_a;
	}
	if (print)
		ft_printf("pa\n");
}

void	push_b(t_data *data, int print)
{
	struct s_c_list	*tmp_next_a;
	struct s_c_list	*tmp_b;

	if (data->p_a)
	{
		tmp_b = data->p_b;
		tmp_next_a = data->p_a->next;
		data->p_b = data->p_a;
		data->p_a = tmp_next_a;
		data->p_b->next = tmp_b;
	}
	if (print)
		ft_printf("pb\n");
}
