/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_and_exit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:06:42 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/21 16:18:40 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_and_exit(t_data *data, int force_exit)
{
	struct s_c_list	*tmp;
	struct s_c_list	*tmp_next;

	if (data->p_a)
	{
		tmp = data->p_a;
		while (tmp)
		{
			tmp_next = tmp->next;
			free(tmp);
			tmp = tmp_next;
		}
	}
	if (data->p_b)
	{
		tmp = data->p_b;
		while (tmp)
		{
			tmp_next = tmp->next;
			free(tmp);
			tmp = tmp_next;
		}
	}
	if (force_exit)
		exit(1);
}
