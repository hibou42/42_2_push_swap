/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:08:44 by aschaefe          #+#    #+#             */
/*   Updated: 2023/01/25 14:50:06 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_struct(t_data *data, t_chain *chain)
{
	(void)chain;
	data->x = 0;
	data->y = 0;
//	chain->number = 0;
//	chain->index = 0;
//	chain->previous = NULL;
//	chain->next = NULL;
}