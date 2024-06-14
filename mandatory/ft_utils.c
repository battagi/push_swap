#include"push_swap.h"


void ft_free_stack(t_node *a)
{
    t_node *tmp;
    t_node *tmp2;

    tmp = a;
    while(tmp)
    {
        tmp2 = tmp->next_node;
        free(tmp);
        tmp = tmp2;
    }
}

int ft_check_repeat(t_node **a, int nbr)
{
    t_node *tmp;

    tmp = *a;
    while(tmp)
    {
        if(tmp->value == nbr)
            return (0);
        tmp = tmp->next_node;
    }
    return (1);
}
void ft_add_node(t_node **a , int nbr)
{
    t_node *new_node;
    t_node *tmp;
    new_node = malloc(sizeof(t_node));
    new_node->value = nbr;
    new_node->next_node = NULL;
    new_node->prev_node = NULL;
    if(*a == NULL)
    {
        *a = new_node;
        return ;
    }
    tmp = *a;
    while(tmp->next_node != NULL)
        tmp = tmp->next_node;
    tmp->next_node = new_node;
    new_node->prev_node = tmp;
}
int ft_check_space(char *str)
{
    int i = 0;
        if(!str)
            return 1;
			while(str[i] != '\0' && str[i] == ' ')
			{
				i++;

			}
			int b = _ft_strlen(str);
			if(i == b)
			return 1;
            else 
            return 0;
}
