/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abattagi <abattagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:33:28 by abattagi          #+#    #+#             */
/*   Updated: 2024/07/13 15:25:01 by abattagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_tree(t_node **a)
{
	t_node	*tmp;
	t_node	*tmp3;

	tmp = *a;
	tmp3 = tmp->next_node->next_node;
	if (tmp->value > tmp->next_node->value && tmp->value < tmp3->value)
		sa(a);
	else if (tmp->value > tmp->next_node->value && tmp->value > tmp3->value
		&& tmp->next_node->value < tmp3->value)
		ra(a);
	else if (tmp->value > tmp->next_node->value && tmp->value > tmp3->value
		&& tmp->next_node->value > tmp3->value)
	{
		sa(a);
		rra(a);
	}
	else if (tmp->value < tmp->next_node->value && tmp->value < tmp3->value
		&& tmp->next_node->value > tmp3->value)
	{
		sa(a);
		ra(a);
	}
	else if (tmp->value < tmp->next_node->value && tmp->value > tmp3->value)
		rra(a);
}

void	sort_four(t_node **a, t_node **b)
{
	while ((*a)->value != ft_find_min(*a))
		ra(a);
	pb(a, b);
	ft_sort_tree(a);
	pa(a, b);
}
