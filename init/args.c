/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:03:45 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/25 13:45:12 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_max_int(char *str, int neg)
{
	long int	num;
	int			i;

	num = 0;
	i = neg;
	while (str[i] != '\0')
	{
		num = num * 10 + (str[i] - '0');
		if (neg == 0 && num > INT_MAX)
			return (1);
		else if (neg == 1 && - num < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	check_str(char *str)
{
	int	res;
	int	neg;
	int	i;

	res = 0;
	neg = 0;
	i = 0;
	if (str[0] == '-')
	{
		i = 1;
		neg = 1;
		if (!str[1])
			res++;
	}
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9'))
			res ++;
		i++;
	}
	if (res)
		return (res);
	return (is_max_int(str, neg));
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
		free_and_exit(data, 1);
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
