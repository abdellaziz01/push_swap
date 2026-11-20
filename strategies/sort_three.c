#include "../hedear.h"
void sort_two(stack **head)
{
    stack *node1;
    stack *node2;
    node1 = (*head)->next;
    node2 = (*head)->next->next;
    (*head)->next = node2;
    node1->next = (*head);
    (*head) = node1;
}
void sort_start_end(stack **head)
{
    stack *start;
    stack *node1;
    stack *node2;
    start = (*head);
    node1 = (*head)->next;
    node2 = (*head)->next->next;
    node2->next = start;
    node1->next = NULL;
}
void sort_second_end(stack **head)
{
    stack *start;
    stack *node1;
    stack *node2;
    start = (*head);
    node1 = (*head)->next;
    node2 = (*head)->next->next;
    start -> next = node2;
    node2->next = node1;
    node1->next = NULL;
}
void sort_three(stack **head)
{
    if ((*head)->nb > (*head)->next->nb)
    {
        sort_two(head);
        if ((*head)->nb > (*head)->next->next->nb)
            sort_start_end(head);
        if ((*head)-> next -> nb > (*head)->next->next->nb)
            sort_second_end(head);
        if ((*head)->nb > (*head)->next->nb)
            sort_two(head);
    }
    else
    {
        if ((*head)-> next -> nb > (*head)->next->next->nb)
            sort_second_end(head);
        if ((*head)->nb > (*head)->next->nb)
            sort_two(head);
    }
}
#include <stdio.h>
int main()
{
    stack *head = malloc(sizeof(stack));
    stack *node1 = malloc(sizeof(stack));
    stack *node2 = malloc(sizeof(stack));
    head->nb = -11;
    node1->nb = 99;
    node2->nb = 8;

    head->next = node1;
    node1->next = node2;
    node2->next = NULL;

    sort_three(&head);
    while (head)
    {
        printf("%d\n", head->nb);
        head = head->next;
    }
}