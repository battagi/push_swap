/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   give_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abattagi <abattagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:33:14 by abattagi          #+#    #+#             */
/*   Updated: 2024/07/13 15:23:16 by abattagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	give_index(t_node **a, int *str, int size)
{
	t_node	*tmp;
	int		i;
	int		j;

	tmp = *a;
	i = 0;
	while (tmp)
	{
		j = 0;
		while (j < size)
		{
			if (tmp->value == str[j])
			{
				tmp->index = j;
				break ;
			}
			j++;
		}
		tmp = tmp->next_node;
	}
}

void	ft_sort_arr(int *str, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (str[j] > str[j + 1])
			{
				tmp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	stack_copy(t_node **a)
{
	int		*str;
	int		size;
	t_node	*tmp;
	int		i;

	size = ft_lstsize_2(*a);
	str = malloc(sizeof(int) * size);
	tmp = *a;
	i = 0;
	while (tmp)
	{
		str[i] = tmp->value;
		tmp = tmp->next_node;
		i++;
	}
	ft_sort_arr(str, size);
	give_index(a, str, size);
	free(str);
}
