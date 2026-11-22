#include "hedear.h"
static stack	*last_node(stack *s_b)
{
	if (!s_b)
		return (NULL);
	while (s_b->next != NULL)
		s_b = s_b->next;
	return (s_b);
}

void rb(stack **s_b)
{
    if(!s_b || !(*s_b) || !(*s_b)->next)
        return ;
    stack *end;
    stack *second;
    stack *last;
    last = last_node(*s_b);
    end = (*s_b);
    second = (*s_b) -> next;
    last -> next = end;
    end -> next = NULL;
    (*s_b) = second;
}