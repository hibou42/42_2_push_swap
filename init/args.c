/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:03:45 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/23 15:38:25 by aschaefe         ###   ########.fr       */
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

int	multi_arg(int argc, char **argv, t_data *data)
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
	data->multi = 1;
	return (res);
}

int	solo_arg(char **argv, t_data *data)
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
	data->solo = 1;
	free(tmp);
	return (res);
}

void	check_args(int argc, char **argv, t_data *data)
{
	int	res;

	if (argc == 1)
		error(data, 1);
	if (argc == 2)
	{
		res = solo_arg(argv, data);
	}
	else
	{
		res = multi_arg(argc, argv, data);
	}
	if (res != 0)
		error(data, 2);
}
