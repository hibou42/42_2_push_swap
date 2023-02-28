/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:58:06 by aschaefe          #+#    #+#             */
/*   Updated: 2023/02/28 12:17:23 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_c_list
{
	int				content;
	int				index;
	struct s_c_list	*next;
}					t_c_list;

typedef struct s_data
{
	int			solo;
	int			multi;
	int			nb_nbr;
	t_c_list	*p_a;
	t_c_list	*p_b;
	t_c_list	*bigest;
	int			max_shift;
}					t_data;

void		error(t_data *data, int num_error);
void		free_and_exit(t_data *data, char force_exit);
void		check_args(int argc, char **argv, t_data *data);
void		check_doublon(t_data *data);
void		init_list(char **argv, t_data *data);
void		init_index(t_data *data);
void		sorting(t_data *data);
void		five_or_less(t_data *data);
void		find_max_shift(t_data *data);
void		raddix(t_data *data, int shift);
t_c_list	*ft_c_lstnew(int content);
void		ft_c_lstadd_back(t_c_list **lst, t_c_list *new);
void		swap_a(t_data *data, int print);
void		swap_b(t_data *data, int print);
void		swap_ab(t_data *data, int print);
void		push_a(t_data *data, int print);
void		push_b(t_data *data, int print);
void		rotate_a(t_data *data, int print);
void		rotate_b(t_data *data, int print);
void		rotate_ab(t_data *data, int print);
void		rev_rotate_a(t_data *data, int print);
void		rev_rotate_b(t_data *data, int print);
void		rev_rotate_ab(t_data *data, int print);
void		test_print(t_data *data);

#endif