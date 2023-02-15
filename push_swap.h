/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:58:06 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/03 13:10:27 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_c_list
{
	int				content;
	struct s_c_list	*next;
}					t_c_list;

typedef struct s_data
{
	int			solo;
	int			multi;
	t_c_list	*p_a;
	t_c_list	*p_b;
}					t_data;

int			check_args(int argc, char **argv, t_data *data);
void		init_struct(t_data *data);
void		init_list(char **argv, t_data *data);
t_c_list	*ft_c_lstnew(int content);
void		ft_c_lstadd_back(t_c_list **lst, t_c_list *new);

#endif