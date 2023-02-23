/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:10:48 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/23 16:10:54 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_bigest(t_data *data)
{
	struct s_c_list	*tmp;

	data->bigest = data->p_a;
	tmp = data->p_a;
	while (tmp)
	{
		if (tmp->content > data->bigest->content)
			data->bigest = tmp;
		tmp = tmp->next;
	}
}

void	init_index(t_data *data)
{
	struct s_c_list	*tmp_smallest;
	struct s_c_list	*tmp;
	int				i;

	find_bigest(data);
	i = 1;
	while (i <= data->nb_nbr)
	{
		tmp_smallest = data->bigest;
		tmp = data->p_a;
		while (tmp)
		{
			if (tmp->index < 1)
			{
				if (tmp->content < tmp_smallest->content)
					tmp_smallest = tmp;
			}
			tmp = tmp->next;
		}
		tmp_smallest->index = i;
		i++;
	}
}
