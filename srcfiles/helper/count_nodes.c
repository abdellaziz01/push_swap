#include "hedear.h"
int count_nodes(stack *head)
{
    int res;
    res = 0;
    while(head)
    {
        res++;
        head = head -> next;
    }
    return res;
}