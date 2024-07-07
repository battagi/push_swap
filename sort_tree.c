#include"push_swap.h"
2 1 3
3 2 1
3 1 2 
1 3 2 
2 3 1

void sort_tee(t_node **a)
{
    if(a->value > a->next->value && a->value < a->next->next->value)
    {
        sa(&a);
    }
}