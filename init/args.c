/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:03:45 by aschaefe          #+#    #+#             */
/*   Updated: 2023/01/26 16:08:03 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_str(char *str)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	if (str[0] == '-')
	{
		i = 1;
		if (!str[1])
			res++;
	}
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9'))
			res ++;
		i++;
	}
	return (res);
}

int	multi_arg(int argc, char **argv)
{
	int	res;
	int	i;

	res = 0;
	i = 1;
	while (i < argc)
	{
		res += check_str(argv[i]);
		i++;
	}
	return (res);
}

int	solo_arg(char **argv)
{
	int		res;
	int		i;
	char	**tmp;

	res = 0;
	tmp = ft_split(argv[1], ' ');
	i = 0;
	while (tmp[i])
	{
		res += check_str(tmp[i]);
		free(tmp[i]);
		i++;
	}
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
