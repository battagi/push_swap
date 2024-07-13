/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abattagi <abattagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:33:30 by abattagi          #+#    #+#             */
/*   Updated: 2024/07/13 13:33:31 by abattagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back_2(t_node **lst, t_node *new)
{
	t_node	*last;

	last = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	else
		while (last->next_node != NULL)
			last = last->next_node;
	last->next_node = new;
	last->next_node->next_node = NULL;
}

void	ft_lstadd_front_2(t_node **lst, t_node *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next_node = *lst;
	*lst = new;
}

t_node	*ft_lstlast_2(t_node *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next_node != NULL)
	{
		lst = lst->next_node;
	}
	return (lst);
}

t_node	*ft_lstnew_2(int content)
{
	t_node	*head;

	head = malloc(sizeof(t_node));
	if (head == NULL)
		return (NULL);
	head->value = content;
	head->next_node = NULL;
	return (head);
}

int	ft_lstsize_2(t_node *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next_node;
	}
	return (i);
}
