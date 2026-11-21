#include "hedear.h"
void  sort_two(stack **head)
{
    stack *start;
    stack *min;

    min = return_min(*head);
    start = (*head);
    if(is_sorted(*head) == 1)
        return ;
    if(start != min)
        sa(head);
}