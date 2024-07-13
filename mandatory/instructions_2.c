/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abattagi <abattagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:30:55 by abattagi          #+#    #+#             */
/*   Updated: 2024/07/13 15:32:39 by abattagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **a)
{
	int		content;
	t_node	*tmp;

	content = 0;
	tmp = *a;
	content = tmp->value;
	tmp->value = tmp->next_node->value;
	tmp->next_node->value = content;
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	int		content;
	t_node	*tmp;

	content = 0;
	tmp = *b;
	content = tmp->value;
	tmp->value = tmp->next_node->value;
	tmp->next_node->value = content;
	write(1, "sb\n", 3);
}

void	ra(t_node **a)
{
	t_node	*new;

	new = *a;
	*a = (*a)->next_node;
	ft_lstadd_back_2(a, new);
	write(1, "ra\n", 3);
}
