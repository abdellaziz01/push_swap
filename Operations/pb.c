#include "../hedear.h"
void pb(stack **a_b , stack **s_a)
{
    stack *temp;
    if (!a_b || !s_a || !*s_a)
        return;
    temp = *s_a;
    *(s_a) = (*s_a) -> next;
    temp -> next = (*a_b);
    *(a_b) = temp;
}