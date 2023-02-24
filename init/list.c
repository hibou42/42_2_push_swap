/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:58:06 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/23 16:14:07 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_list(char **argv, t_data *data)
{
	int		i;
	char	**tmp;

	i = 0;
	if (data->solo == 1)
		tmp = ft_split(argv[1], ' ');
	else
	{
		tmp = argv;
		i = 1;
	}
	data->p_a = ft_c_lstnew(ft_atoi(tmp[i]));
	if (data->solo == 1)
		free(tmp[i]);
	i++;
	while (tmp[i])
	{
		ft_c_lstadd_back(&data->p_a, ft_c_lstnew(ft_atoi(tmp[i])));
		if (data->solo == 1)
			free(tmp[i]);
		i++;
	}
	if (data->solo == 1)
		free(tmp);
	data->nb_nbr = i - data->multi;
}
