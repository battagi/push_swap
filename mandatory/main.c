#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

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
			ft_free(tab);
			c++;
		}
	}
	tmp = a;
	while (tmp)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next_node;
	}
}
