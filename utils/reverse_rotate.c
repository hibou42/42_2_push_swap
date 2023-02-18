/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:06:39 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/17 15:32:12 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rotate_a(t_data *data, int print)
{
	struct s_c_list	*tmp_last;
	struct s_c_list	*tmp;

	tmp = data->p_a;
	while(tmp->next)
	{
		tmp_last = tmp;
		tmp = tmp->next;
	}
	tmp_last->next = NULL;
	tmp->next = data->p_a;
	data->p_a = tmp;
	if (print)
		ft_printf("rra\n");
}

void	rev_rotate_b(t_data *data, int print)
{
	struct s_c_list	*tmp_last;
	struct s_c_list	*tmp;

	tmp = data->p_b;
	while(tmp->next)
	{
		tmp_last = tmp;
		tmp = tmp->next;
	}
	tmp_last->next = NULL;
	tmp->next = data->p_b;
	data->p_b = tmp;
	if (print)
		ft_printf("rrb\n");
}

void	rev_rotate_ab(t_data *data, int print)
{
	rev_rotate_a(data, 0);
	rev_rotate_b(data, 0);
	if (print)
		ft_printf("rrr\n");
}