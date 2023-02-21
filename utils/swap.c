/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:06:39 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/21 17:54:09 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_data *data, int print)
{
	struct s_c_list	*tmp_struct;
	struct s_c_list	*tmp_2;
	struct s_c_list	*tmp_3;

	if (data->p_a && data->p_a->next != NULL)
	{
		tmp_struct = data->p_a;
		tmp_2 = data->p_a->next;
		tmp_3 = tmp_2->next;
		data->p_a = tmp_2;
		data->p_a->next = tmp_struct;
		tmp_struct->next = tmp_3;
	}
	if (print)
		ft_printf("sa\n");
}

void	swap_b(t_data *data, int print)
{
	struct s_c_list	*tmp_struct;
	struct s_c_list	*tmp_2;
	struct s_c_list	*tmp_3;

	if (data->p_b && data->p_b->next != NULL)
	{
		tmp_struct = data->p_b;
		tmp_2 = data->p_b->next;
		tmp_3 = tmp_2->next;
		data->p_b = tmp_2;
		data->p_b->next = tmp_struct;
		tmp_struct->next = tmp_3;
	}
	if (print)
		ft_printf("sb\n");
}

void	swap_ab(t_data *data, int print)
{
	swap_a(data, 0);
	swap_b(data, 0);
	if (print)
		ft_printf("ss\n");
}
