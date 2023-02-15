/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:06:39 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/01 16:39:02 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_struct(t_data *data)
{
	data->solo = 0;
	data->multi = 0;
	data->p_a = NULL;
	data->p_b = NULL;
}
