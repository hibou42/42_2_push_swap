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
	struct s_c_list	*tmp_1;
	struct s_c_list	*tmp_2;
	struct s_c_list	*tmp_last;

	tmp_1 = data->p_a;
	tmp_2 = data->p_a->next;
	tmp_last = data->p_a;
	while (tmp_last->next)
		tmp_last = tmp_last->next;
	tmp_last->next = tmp_1;
	tmp_1->next = NULL;
	data->p_a = tmp_2;
	if (print)
		ft_printf("ra\n");
}

void	rotate_b(t_data *data, int print)
{
	struct s_c_list	*tmp_1;
	struct s_c_list	*tmp_2;
	struct s_c_list	*tmp_last;

	tmp_1 = data->p_b;
	tmp_2 = data->p_b->next;
	tmp_last = data->p_b;
	while (tmp_last->next)
		tmp_last = tmp_last->next;
	tmp_last->next = tmp_1;
	tmp_1->next = NULL;
	data->p_b = tmp_2;
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
