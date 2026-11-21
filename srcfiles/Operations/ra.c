#include "hedear.h"
static stack	*last_node(stack *s_a)
{
	if (!s_a)
		return (NULL);
	while (s_a->next != NULL)
		s_a = s_a->next;
	return (s_a);
}

void ra(stack **s_a)
{
    if(!s_a || !(*s_a) || !(*s_a)->next)
        return ;
    stack *end;
    stack *second;
    stack *last;
    last = last_node(*s_a);
    end = (*s_a);
    second = (*s_a) -> next;
    last -> next = end;
    end -> next = NULL;
    (*s_a) = second;
    ft_putstr("ra\n");
}