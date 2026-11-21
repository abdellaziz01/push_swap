#include "hedear.h"
void swap_h(stack **head)
{
    rra(head);
    sa(head);
}
void sort_three(stack **head)
{
    stack *start;
    stack *second;
    stack *min;

    min = return_min(*head);
    start = (*head);
    second = (*head) -> next;
    if(is_sorted(*head) == 1)
        return ;
    if(start == min)
        swap_h(head);
    else 
    {
        if(second == min)
            ra(head);
        else
            rra(head);
        if(is_sorted((*head) -> next) == 0)
            swap_h(head);
    }
}

// #include <stdio.h>
// int main()
// {
//     stack *head = malloc(sizeof(stack));
//     stack *node1 = malloc(sizeof(stack));
//     stack *node2 = malloc(sizeof(stack));
//     head->nb =  56454545;
//     node1->nb =  -10;
//     node2->nb =  0;

//     head->next = node1;
//     node1->next = node2;
//     node2->next = NULL;

//     sort_three(&head);
//     while (head)
//     {
//         printf("%d\n", head->nb);
//         head = head->next;
//     }
// }