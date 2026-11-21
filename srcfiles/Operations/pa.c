#include "hedear.h"
void pa(stack **s_a , stack **s_b)
{
    stack *temp;
    if (!s_a || !s_b || !*s_b)
        return;
    temp = *s_b;
    *(s_b) = (*s_b) -> next;
    temp -> next = (*s_a);
    *(s_a) = temp;
    ft_putstr("pa\n");
}