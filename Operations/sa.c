#include "../hedear.h"
#include <stdlib.h>
void sa(stack_a **head)
{
    stack_a *node3;
    stack_a *node2;
    if(!head || !*head || !(*head) -> next)
        return ;
    node2 = (*head) -> next;
    node3 = (*head) -> next -> next;
    (*head) -> next = node3;
    node2 -> next = (*head);
    *head = node2;
}