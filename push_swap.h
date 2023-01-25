/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:58:06 by aschaefe          #+#    #+#             */
/*   Updated: 2023/01/25 13:13:41 by aschaefe         ###   ########.fr       */
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

void	init_struct(t_data *data, t_chain *list);
int		check_args(int argc, char **argv, t_chain *chain);

#endif