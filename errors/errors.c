/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:15:43 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/23 17:43:15 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error(t_data *data, int num_error)
{
	ft_putstr_fd("Error\n", 2);
	(void)num_error;
	/*
	if (num_error == 1)
		ft_putstr_fd("Il n'y a pas d'argument\n", 2);
	if (num_error == 2)
		ft_putstr_fd("Il y a une erreur dans les arguments\n", 2);
	if (num_error == 3)
		ft_putstr_fd("Il y a un doublon\n", 2);
	*/
	free_and_exit(data, 1);
}
