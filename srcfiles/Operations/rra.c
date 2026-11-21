#include "hedear.h"
static stack	*last_node(stack *s_a)
{
	if (!s_a)
		return (NULL);
	while (s_a->next != NULL)
		s_a = s_a->next;
	return (s_a);
}
static stack	*llast_node(stack *s_a)
{
    stack *last;
    last = last_node(s_a);
	if (!s_a)
		return (NULL);
	while (s_a->next != last)
		s_a = s_a->next;
	return (s_a);
}
void rra(stack **s_a)
{
    if(!s_a || !(*s_a) || !(*s_a)->next)
        return ;
    stack *last1;
    stack *last2;
    last1 = last_node(*s_a);
    last2 = llast_node(*s_a);
    last1 -> next = (*s_a);
    (*s_a) = last1;
    last2 -> next = NULL;
    ft_putstr("rra\n");
     
}
// #include <stdio.h>
// int main()
// {
//     stack *head = malloc(sizeof(stack));
//     stack *node1 = malloc(sizeof(stack));
//     stack *node2 = malloc(sizeof(stack));
//     stack *node3 = malloc(sizeof(stack));
//     head -> nb = 11;
//     node1 -> nb = 1;
//     node2 -> nb = 2;
//     node3 -> nb = 3;
//     head -> next = node1;
//     node1 -> next = node2;
//     node2 -> next = node3;
//     node3 -> next = NULL;

//     stack *Head = malloc(sizeof(stack));
//     stack *Code1 = malloc(sizeof(stack));
//     stack *Code2 = malloc(sizeof(stack));
//     stack *Code3 = malloc(sizeof(stack));
//     Head -> nb = 1115;
//     Code1 -> nb = 1;
//     Code2 -> nb = 2;
//     Code3 -> nb = 3;
//     Head -> next = Code1;
//     Code1 -> next = Code2;
//     Code2 -> next = Code3;
//     Code3 -> next = NULL;
//     rra(&head);
//     while(head)
//     {
//         printf("%d\n", head -> nb);
//         head = head -> next;
//     }
// }