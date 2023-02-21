/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doublon.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:28:51 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/21 15:33:29 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_doublon(t_data *data)
{
	struct s_c_list	*tmp_check;
	struct s_c_list	*tmp;

	tmp_check = data->p_a;
	while (tmp_check)
	{
		tmp = data->p_a;
		while (tmp)
		{
			if (tmp->content == tmp_check->content)
			{
				if (tmp != tmp_check)
					error(data, 3);
			}
			tmp = tmp->next;
		}
		tmp_check = tmp_check->next;
	}
}
