/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:57:53 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/23 17:31:55 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
test_print(&data);
void	test_print(t_data *data)
{
	t_c_list	*tmp;

	printf("Pile A\n");
	tmp = data->p_a;
	while (tmp)
	{
		printf("%d / index = %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}
	printf("Pile B\n");
	tmp = data->p_b;
	while (tmp)
	{
		printf("%d / index = %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}
}
*/

int	main(int argc, char **argv)
{
	t_data	data;

	data = (t_data){};
	check_args(argc, argv, &data);
	init_list(argv, &data);
	check_doublon(&data);
	init_index(&data);
	sorting(&data);
	free_and_exit(&data, 0);
	return (0);
}

/*
~~~ INSTRUCTIONS FOR PUSH_SWAP ~~~

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