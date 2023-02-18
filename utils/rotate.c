/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:06:39 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/17 15:32:04 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_data *data, int print)
{
	struct s_c_list	*tmp_first;
	struct s_c_list	*tmp;

	if (data->p_a)
	{
		tmp_first = data->p_a;
		data->p_a = data->p_a->next;
		tmp = data->p_a;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = tmp_first;
		tmp_first->next = NULL;
	}
	if (print)
		ft_printf("ra\n");
}

void	rotate_b(t_data *data, int print)
{
	struct s_c_list	*tmp_first;
	struct s_c_list	*tmp;

	if (data->p_b)
	{
		tmp_first = data->p_b;
		data->p_b = data->p_b->next;
		tmp = data->p_b;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = tmp_first;
		tmp_first->next = NULL;
	}
	if (print)
		ft_printf("rb\n");
}

void	rotate_ab(t_data *data, int print)
{
	rotate_a(data, 0);
	rotate_b(data, 0);
	if (print)
		ft_printf("rr\n");
}
