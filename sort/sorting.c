/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:00:03 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/23 16:00:34 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_already_sort(t_data *data)
{
	struct s_c_list	*tmp;
	int i;
	
	tmp = data->p_a;
	i = 1;
	while (tmp->next && tmp->index == i)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == data->nb_nbr)
		return (1);
	else
		return (0);
}

void	sorting(t_data *data)
{
	if (is_already_sort(data))
		free_and_exit(data, 1);
	if (data->nb_nbr <= 5)
		five_or_less(data);
	else	
	{
		find_max_shift(data);
		raddix(data, 0);
	}
}
