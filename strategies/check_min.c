#include "../hedear.h"

int check_MIN (stack *S_a)
{
    stack *temp1;
    temp1 = S_a;
    
    int MIN = temp1 -> nb;
    while (temp1)
    {
        if (MIN > temp1 -> nb)
            MIN = temp1 -> nb;  
        temp1 = temp1 -> next;
    }

    return MIN;
}
stack *check_node (stack *head)
{
    if (!head)
        return NULL;  
    int nb = check_MIN (head);
    while (head)
    {
        if (head -> nb == nb)
            return head;
        head = head -> next;
    }
    return NULL;
}