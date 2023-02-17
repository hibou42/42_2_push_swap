/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:57:53 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/17 15:35:53 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test_print(t_data *data)
{
	t_c_list	*tmp;

	printf("Pile A\n");
	tmp = data->p_a;
	while (tmp)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
	printf("Pile B\n");
	tmp = data->p_b;
	while (tmp)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
}

int	main(int argc, char **argv)
{
	int		check;
	t_data	data;

	init_struct(&data);
	if (argc > 1)
		check = check_args(argc, argv, &data);
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
		init_list(argv, &data);
		test_print(&data);
		swap_a(&data, 1);
		test_print(&data);
		return (0);
	}
}
/*
sa (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a.
Ne fait rien s’il n’y en a qu’un ou aucun.

sb (swap b ) : Intervertit les 2 premiers éléments au sommet de la pile b.
Ne fait rien s’il n’y en a qu’un ou aucun.

ss : sa et sb en même temps.

pa (push a) : Prend le premier élément au sommet de b et le met sur a.
Ne fait rien si b est vide.

pb (push b) : Prend le premier élément au sommet de a et le met sur b.
Ne fait rien si a est vide.

ra (rotate a) : Décale d’une position vers le haut tous les élement de la pile a
Le premier élément devient le dernier.

rb (rotate b) : Décale d’une position vers le haut tous les élement de la pile b
Le premier élément devient le dernier.

rr : ra et rb en même temps.

rra (reverse rotate a) : Décale d’une position vers le bas tous les élements de
la pile a. Le dernier élément devient le premier.

rrb (reverse rotate b) : Décale d’une position vers le bas tous les élements de
la pile b. Le dernier élément devient le premier.

rrr : rra et rrb en même temps.
*/