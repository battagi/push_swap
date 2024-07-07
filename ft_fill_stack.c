#include "push_swap.h"
#include <stdio.h>



int ft_is_number(char *str)
{
	int c = 0;
    while (str[c] != '\0')
    {
        if ((str[c] < '0' || str[c] > '9') && str[c] != '-' && str[c] != '+')
            return (0); 
        if ((str[c] == '-' || str[c] == '+') && c != 0)
            return (0); 
        c++;
    }
    return (1);
}
int	ft_fill_stack(t_node **a, char **tab)
{
	long	nbr;
	int		c;

	c = 0;
	while (tab[c])
	{
		if (ft_is_number(tab[c]))
		{
			ft_free_stack(*a);
			return (-1);
		}
		nbr = ft_atol(tab[c]);
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
