/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:57:53 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/25 14:17:44 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


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


int	main(int argc, char **argv)
{
	t_data	data;

	data = (t_data){};
	check_args(argc, argv, &data);
	init_list(argv, &data);
	check_doublon(&data);
	init_index(&data);
	sorting(&data);
	test_print(&data);
	free_and_exit(&data, 0);
	return (0);
}
