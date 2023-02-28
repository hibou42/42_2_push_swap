/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:15:25 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/28 12:15:45 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	test_print(t_data *data)
{
	t_c_list	*tmp;

	printf("Pile A\n");
	tmp = data->p_a;
	while (tmp)
	{
		printf("%d / index = %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}
	printf("Pile B\n");
	tmp = data->p_b;
	while (tmp)
	{
		printf("%d / index = %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}
}
