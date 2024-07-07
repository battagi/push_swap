#include "push_swap.h"

void sa(t_node **a)
{
    int content = 0;
    // t_node *tmp = ;

    content = a[0][0].value;
    a[0][0].value = a[0][1].value;
    a[0][1].value = content;
}
void sb (t_node **b)
{
    int content = 0;

    content = b[0][0].value;
    b[0][0].value = b[0][1].value;
    b[0][1].value = content;
}

void ss(t_node **a, t_node **b)
{
    sa(a);
    sb(b);
}
void  ra (t_node **a)
{

}

void rb (t_node **b)
{

}
void rr (t_node **a, t_node **b)
{
    ra(a);
    rb(b);
}
void rra(t_node **a)
{

}
void rrb(t_node **b)
{
    
}
void rrr(t_node **a, t_node **b)
{
    rra(a);
    rrb(b);
}
void pa (t_node **a, t_node **b)
{

}
void pb (t_node **a, t_node **b)
{
    
}