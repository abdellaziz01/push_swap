#include "../hedear.h"
void sb(stack **head)
{
    stack *node3;
    stack *node2;
    if(!head || !*head || !(*head) -> next)
        return ;
    node2 = (*head) -> next;
    node3 = (*head) -> next -> next;
    (*head) -> next = node3;
    node2 -> next = (*head);
    *head = node2;
}