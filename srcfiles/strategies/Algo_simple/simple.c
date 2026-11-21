#include "hedear.h"
int return_nothing(stack **s_a , stack **s_b)
{
    if(!s_a || !s_b)
        return 1;
    if(is_sorted(s_a))
        return 1;
    if(count_nodes(head) == 2)
    {
        sort_two(head);
        return 1;
    }
    if(count_nodes(head) == 3)
    {
        sort_three(head);
        return 1;
    }
    return 0;
}
void shift_all(stack **s_a , int index , int nb)
{
    if(index <= (nb / 2))
    {
        while(index > 0)
        {
            ra(s_a);
            index--;
        }
    }
    else
    {
        index = nb - index + 1;
        while(index > 0)
        {
            rra(s_a);
            index--;
        }
    }  
}
void min_in_top(stack **s_a)
{
    int res;
    int index;
    int nb;
    stack   *min_node;
    min_node = return_min(s_a);
    nb = count_nodes(*s_a);
    index = index_min(*s_a);
    if(min_node == (*s_a))
        return ;
    shift_all(s_a , index , nb);
}


void simple_algo(stack *s_a , stack *s_b)
{
    int res;
    res = return_nothing(s_a , s_b);
    if(res == 1)
        return ;
    min_in_top(s_a);
    int res;
    res = count_nodes(s_a);
    while(res != 3)
    {
        
    }
   
    
}
