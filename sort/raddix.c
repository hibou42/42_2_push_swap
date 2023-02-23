/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raddix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:15:56 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/23 16:20:54 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_max_shift(t_data *data)
{
	while ((data->nb_nbr >> data->max_shift) != 0)
	{
		data->max_shift++;
	}
}

void	raddix(t_data *data, int shift)
{
	int	len;

	if (shift >= data->max_shift)
		return ;
	len = 0;
	while (len < data->nb_nbr)
	{
		if ((data->p_a->index >> shift) & 1)
			rotate_a(data, 1);
		else
			push_b(data, 1);
		len ++;
	}
	while (data->p_b)
	{
		push_a(data, 1);
	}
	raddix(data, shift + 1);
}
