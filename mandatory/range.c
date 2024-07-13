/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abattagi <abattagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:33:23 by abattagi          #+#    #+#             */
/*   Updated: 2024/07/13 13:37:07 by abattagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_general(t_node **a, t_node **b, int end)
{
	int	start;

	start = 0;
	while ((*a))
	{
		if ((*a)->index >= start && (*a)->index <= end)
		{
			pb(a, b);
			start++;
			end++;
		}
		else if ((*a)->index < start)
		{
			pb(a, b);
			rb(b);
			start++;
			end++;
		}
		else
			ra(a);
	}
}

int	ft_find_max(t_node *b)
{
	int		max;
	t_node	*tmp;

	tmp = b;
	max = tmp->index;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next_node;
	}
	return (max);
}

int	ft_find_position(t_node *b, int max)
{
	int		count;
	t_node	*tmp;

	count = 0;
	tmp = b;
	while (tmp)
	{
		if (tmp->index == max)
			return (count);
		count++;
		tmp = tmp->next_node;
	}
	return (-1);
}

void	ft_final_sort(t_node **a, t_node **b)
{
	t_node	*last;
	int		max;
	int		size;
	int		position_of_max;

	while ((*b))
	{
		max = ft_find_max(*b);
		position_of_max = ft_find_position(*b, max);
		size = ft_lstsize_2(*b);
		if ((*b)->index == max)
			pa(a, b);
		else if (position_of_max <= size / 2)
		{
			rb(b);
		}
		else
		{
			rrb(b);
		}
	}
}
