/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:57:53 by aschaefe          #+#    #+#             */
/*   Updated: 2023/01/25 13:14:43 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	data;
	t_chain	chain;
	int		check;

	printf("Welcome to %s\n", argv[0]);
	init_struct(&data, &chain);
	check = check_args(argc, argv, &chain);
	if (check != 0)
		return (0);
	return (0);
}
