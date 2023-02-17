/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:06:39 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/17 15:53:29 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_data *data, int print)
{
	struct s_c_list	*tmp_struct;
	int				tmp_content;

	if (data->p_a && data->p_a->next != NULL)
	{
		tmp_content = data->p_a->content;
		tmp_struct = data->p_a->next;
		data->p_a->content = tmp_struct->content;
		tmp_struct->content = tmp_content;
	}
	if (print)
		ft_printf("sa\n");
}

void	swap_b(t_data *data, int print)
{
	struct s_c_list	*tmp_struct;
	int				tmp_content;

	if (data->p_b && data->p_b->next != NULL)
	{
		tmp_content = data->p_b->content;
		tmp_struct = data->p_b->next;
		data->p_b->content = tmp_struct->content;
		tmp_struct->content = tmp_content;
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
