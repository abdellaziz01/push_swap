#include "hedear.h"
static void swap_h(stack **head)
{
    rra(head);
    ft_putstr("rra\n");
    sa(head);
    ft_putstr("sa\n");
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
        {
            ra(head);
            ft_putstr("ra\n");
        }
        else
        {
            rra(head);
            ft_putstr("rra\n");
        }
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