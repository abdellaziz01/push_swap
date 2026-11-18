#include "../hedear.h"
void sb(stack_b **head)
{
    stack_b *node3;
    stack_b *node2;
    if(!head || !*head || !(*head) -> next)
        return ;
    node2 = (*head) -> next;
    node3 = (*head) -> next -> next;
    (*head) -> next = node3;
    node2 -> next = (*head);
    *head = node2;
}