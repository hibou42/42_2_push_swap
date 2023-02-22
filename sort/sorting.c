/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:00:03 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/21 17:11:08 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sorting(t_data *data)
{
	if (data->nb_nbr <= 5)
		five_or_less(data);
	else
	{
		find_max_shift(data);
		raddix(data, 0);
	}
}
