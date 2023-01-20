/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:03:45 by aschaefe          #+#    #+#             */
/*   Updated: 2023/01/20 16:29:13 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	multi_arg(int argc, char **argv)
{
	int		res = 0;

	(void)argc;
	(void)argv;
	printf("multi\n");
	return (res);
}

int	solo_arg(char **argv)
{
	int		res = 0;
	char	**tmp;

	tmp = ft_split(argv[1], ' ');
	printf("tmp = %s %s %s\n", tmp[0], tmp[1], tmp[2]);
	return (res);
}

int	check_args(int argc, char **argv)
{
	int	res;

	if (argc == 1)
	{
		ft_printf("Error\nIl n'y a pas d'arguments\n");
		return (1);
	}
	else if (argc == 2)
	{
		res = solo_arg(argv);
	}
	else
	{
		res = multi_arg(argc, argv);
	}
	return (res);
}
