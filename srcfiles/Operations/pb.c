#include "hedear.h"
void pb(stack **s_a , stack **s_b)
{
    stack *temp;
    if (!s_b || !s_a || !*s_a)
        return;
    temp = *s_a;
    *(s_a) = (*s_a) -> next;
    temp -> next = (*s_b);
    *(s_b) = temp;
}