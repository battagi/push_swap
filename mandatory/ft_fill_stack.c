/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abattagi <abattagi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:33:10 by abattagi          #+#    #+#             */
/*   Updated: 2024/07/13 15:22:06 by abattagi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_fill_stack(t_node **a, char **tab, long nbr)
{
	int	c;

	c = 0;
	while (tab[c])
	{
		if (ft_is_int(tab[c]) == 0)
		{
			ft_free_stack(*a);
			return (-1);
		}
		nbr = ft_atoi(tab[c]);
		if (nbr > 2147483647 || nbr < -2147483648)
		{
			ft_free_stack(*a);
			return (-2);
		}
		if (ft_check_repeat(a, nbr) == 0)
		{
			ft_free_stack(*a);
			return (-3);
		}
		ft_add_node(a, (int)nbr);
		c++;
	}
	return (0);
}
