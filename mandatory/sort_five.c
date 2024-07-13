/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abattagi <abattagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:33:25 by abattagi          #+#    #+#             */
/*   Updated: 2024/07/13 13:33:26 by abattagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_min(t_node *a)
{
	t_node	*tmp;
	t_node	*min;

	tmp = a;
	min = a;
	while (tmp)
	{
		if (tmp->value < min->value)
			min = tmp;
		tmp = tmp->next_node;
	}
	return (min->value);
}

void	sort_five(t_node **a, t_node **b)
{
	while ((*a)->value != ft_find_min(*a))
		ra(a);
	pb(a, b);
	while ((*a)->value != ft_find_min(*a))
		ra(a);
	pb(a, b);
	ft_sort_tree(a);
	while (*b)
		pa(a, b);
}
