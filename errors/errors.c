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
	write(2, "Error\n", 6);
	if (num_error == 1)
		write(2, "Il n'y a pas d'argument\n", 24);
	if (num_error == 2)
		write(2, "Il y a une erreur dans les arguments\n", 37);
	if (num_error == 3)
		write(2, "Il y a un doublon\n", 18);
	free_and_exit(data, 1);
}
