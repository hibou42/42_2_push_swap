/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:03:45 by aschaefe          #+#    #+#             */
/*   Updated: 2023/01/25 13:53:54 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	add_in_struct(char	*str, )
{
	
}

int	multi_arg(int argc, char **argv)
{
	int		res = 0;

	(void)argc;
	(void)argv;
	printf("multi\n");
	return (res);
}

int	solo_arg(char **argv, t_chain *chain)
{
	int		res = 0;
	int		i;
	char	**tmp;

	tmp = ft_split(argv[1], ' ');
	i = 0;
	while (tmp[i])
	{
		add_in_struct(ft_atoi(tmp[i]));
		free(tmp[i]);
		i++;
	}
	return (res);
}

int	check_args(int argc, char **argv, t_chain *chain)
{
	int	res;

	if (argc == 1)
	{
		ft_printf("Error\nIl n'y a pas d'arguments\n");
		return (1);
	}
	else if (argc == 2)
	{
		res = solo_arg(argv, chain);
	}
	else
	{
		res = multi_arg(argc, argv);
	}
	return (res);
}
