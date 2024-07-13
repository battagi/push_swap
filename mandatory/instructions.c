/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abattagi <abattagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:33:16 by abattagi          #+#    #+#             */
/*   Updated: 2024/07/13 15:30:03 by abattagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_node **b)
{
	t_node	*new;

	new = *b;
	*b = (*b)->next_node;
	ft_lstadd_back_2(b, new);
	write(1, "rb\n", 3);
}

void	rra(t_node **a)
{
	t_node	*tmp;
	t_node	*new_last;

	if (*a == NULL || (*a)->next_node == NULL)
		return ;
	tmp = *a;
	new_last = tmp;
	while (tmp->next_node->next_node != NULL)
		tmp = tmp->next_node;
	new_last = tmp->next_node;
	tmp->next_node = NULL;
	ft_lstadd_front_2(a, new_last);
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	t_node	*tmp;
	t_node	*new_last;

	if (*b == NULL || (*b)->next_node == NULL)
		return ;
	tmp = *b;
	new_last = tmp;
	while (tmp->next_node->next_node != NULL)
		tmp = tmp->next_node;
	new_last = tmp->next_node;
	tmp->next_node = NULL;
	ft_lstadd_front_2(b, new_last);
	write(1, "rrb\n", 4);
}

void	pa(t_node **a, t_node **b)
{
	t_node	*tmp;

	if (*b == NULL)
		return ;
	tmp = *b;
	*b = (*b)->next_node;
	tmp->next_node = *a;
	*a = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_node **a, t_node **b)
{
	t_node	*tmp;

	if (*a == NULL)
		return ;
	tmp = *a;
	*a = (*a)->next_node;
	tmp->next_node = *b;
	*b = tmp;
	write(1, "pb\n", 3);
}
