/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:08:44 by aschaefe          #+#    #+#             */
/*   Updated: 2023/01/20 16:26:01 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_struct(t_data *data, t_chain *list)
{
	data->x = 0;
	data->y = 0;
	list->number = 0;
	list->index = 0;
	list->previous = NULL;
	list->next = NULL;
}
