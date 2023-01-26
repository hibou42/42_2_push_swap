/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:58:06 by aschaefe          #+#    #+#             */
/*   Updated: 2023/01/26 16:08:25 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_data
{
	int		x;
	int		y;
}		t_data;

typedef struct s_chain
{
	int				number;
	int				index;
	struct s_chain	*previous;
	struct s_chain	*next;
}		t_chain;

int		check_args(int argc, char **argv);
t_chain	*lst_new_block(int content);
void	lst_add_back(t_chain **lst, t_chain *new);

#endif