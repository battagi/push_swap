#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

void sort_two(t_node **stack_a)
{

}

void sort_three(t_node **stack_a)
{

}

void sort_five()
{

}

int	main(int argc, char **argv)
{
	int		c;
	t_node	*a;
	t_node	*b;
	char	**tab;
	int		i;
	int		x;
	t_node	*tmp;

	c = 1;
	a = NULL;
	b = NULL;
	tab = NULL;
	if (argc == 1 || (argc == 2 && argv[1][0] == '\0'))
		{
				// printf("hadchi 5asr");
				exit(1);
		}
	else
	{
		while (c < argc)
		{
			i = ft_check_space(argv[c]);
			if (i == 1)
			{
				// printf("hadchi 5asr");
				exit(1);
			}
			tab = ft_split(argv[c], ' ');
			x = ft_fill_stack(&a, tab);
			if (x < 0)
			{
				// printf("hadchi 5asr");
				exit(1);
			}
			ft_free_strs(tab);
			c++;
		}
		if(ft_lstsize(a) == 2)
			sort_two(a);
		else if(ft_lstsize(a) == 3)
			sort_three(a);
		else if(ft_lstsize(a) == 5 || ft_lstsize(a) == 4)
			sort_five(a);	
	}
}