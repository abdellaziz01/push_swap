#include "hedear.h"
int index_min(stack *head)
{
    stack *min_node;
    int index;
    min_node = return_min(head);
    index = 0;
    while(head &&  head != min_node)
    {
        index++;
        head = head -> next;
    }
    return index;
}