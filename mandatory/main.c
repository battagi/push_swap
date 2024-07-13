/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abattagi <abattagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:33:18 by abattagi          #+#    #+#             */
/*   Updated: 2024/07/13 15:24:13 by abattagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parser(char *argv, t_node **a)
{
	int		i;
	int		x;
	char	**tab;
	long	nbr;

	nbr = 0;
	i = ft_check_space(argv);
	if (i == 1)
		ft_exit_error();
	tab = ft_split(argv, ' ');
	x = ft_fill_stack(a, tab, nbr);
	if (x < 0)
		ft_exit_error();
	ft_free(tab);
}

void	handler(t_node **a, t_node **b)
{
	int	size;

	size = ft_lstsize_2(*a);
	stack_copy(a);
	if (size == 2)
	{
		if ((*a)->value > (*a)->next_node->value)
			sa(a);
	}
	else if (size == 3)
		ft_sort_tree(a);
	else if (size == 5)
		sort_five(a, b);
	else if (size == 4)
		sort_four(a, b);
	else if (size <= 100)
	{
		ft_sort_general(a, b, 15);
		ft_final_sort(a, b);
	}
	else
	{
		ft_sort_general(a, b, 30);
		ft_final_sort(a, b);
	}
}

int	main(int argc, char **argv)
{
	int		c;
	t_node	*a;
	t_node	*b;
	t_node	*tmp;
	t_node	*tmp2;

	c = 1;
	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && argv[1][0] == '\0'))
		ft_exit_error();
	else
	{
		while (c < argc)
		{
			parser(argv[c], &a);
			c++;
		}
		handler(&a, &b);
	}
}
