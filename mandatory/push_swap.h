/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abattagi <abattagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:33:03 by abattagi          #+#    #+#             */
/*   Updated: 2024/07/13 15:31:43 by abattagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <stdlib.h>

typedef struct node
{
	int			value;
	int			index;
	struct node	*next_node;
	struct node	*prev_node;
}				t_node;
int				ft_fill_stack(t_node **a, char **tab, long nbr);
void			ft_free_stack(t_node *a);
int				ft_check_repeat(t_node **a, int nbr);
void			ft_add_node(t_node **a, int nbr);
int				ft_check_space(char *str);
void			ft_exit_error(void);

void			sa(t_node **a);
void			sb(t_node **b);
void			ra(t_node **a);
void			rb(t_node **b);
void			rra(t_node **a);
void			rrb(t_node **b);
void			pa(t_node **a, t_node **b);
void			pb(t_node **a, t_node **b);

void			sort_five(t_node **a, t_node **b);
void			ft_sort_tree(t_node **a);
void			sort_four(t_node **a, t_node **b);
int				ft_find_min(t_node *a);

void			ft_lstadd_back_2(t_node **lst, t_node *new);
void			ft_lstadd_front_2(t_node **lst, t_node *new);
t_node			*ft_lstlast_2(t_node *lst);
t_node			*ft_lstnew_2(int content);
int				ft_lstsize_2(t_node *lst);

void			give_index(t_node **a, int *str, int size);
void			ft_sort_arr(int *str, int size);
void			stack_copy(t_node **a);

void			ft_final_sort(t_node **a, t_node **b);
void			ft_sort_general(t_node **a, t_node **b, int end);
void			parser(char *argv, t_node **a);

#endif
