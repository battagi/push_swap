
#include "../libfttt/libft.h"
#include <stdio.h>
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
typedef struct node
{
	int				value;
	struct node	*next_node;
	struct node	*prev_node;
}					t_node;
int					ft_fill_stack(t_node **a, char **tab);
void				ft_free_stack(t_node *a);
int					ft_check_repeat(t_node **a, int nbr);
void				ft_add_node(t_node **a, int nbr);
int ft_check_space(char *str);

#endif
