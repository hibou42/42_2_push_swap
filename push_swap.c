/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:57:53 by aschaefe          #+#    #+#             */
/*   Updated: 2023/01/25 15:34:16 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		check;

	if (argc > 1)
		check = check_args(argc, argv);
	else 
	{
		ft_printf("Error\nIl n'y a pas d'arguments\n");
		return (0);
	}
	if (check != 0)
	{
		ft_printf("Error\nIl y a une erreur dans les arguments\n");
		return (0);
	}
	else
	{
		printf("done\n");
		return (0);
	}
}
