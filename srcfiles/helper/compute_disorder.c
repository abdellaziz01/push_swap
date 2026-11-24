#include "hedear.h"
float compute_disorder (stack *S_a)
{
    float mistakes;
    float total_pairs;
    stack *temp1;
    stack *temp2;

    temp1 = S_a;
    temp2 = S_a;
    mistakes = 0;
    total_pairs  = 0;
    while (temp1)
    {
        temp2 = temp1->next;
        while (temp2)
        {
            total_pairs++;
            if (temp1->nb > temp2->nb)
                mistakes++;
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    if (total_pairs == 0)
        return 0;
    return (mistakes / total_pairs);
}

// #include <stdlib.h>
// #include <stdio.h>
// int main(void)
// {
//     stack *head;
//     stack *n1;
//     stack *n2;
//     stack *n3;
//     stack *n4;

//     /* LOW: 1 mistake / 45 pairs = 0.0222 */

//     head = malloc(sizeof(stack));
//     n1 = malloc(sizeof(stack));
//     n2 = malloc(sizeof(stack));
//     n3 = malloc(sizeof(stack));
//     n4 = malloc(sizeof(stack));

//     head->nb = 1;
//     n1->nb = 2;
//     n2->nb = 66;
//     n3->nb = 4;
//     n4->nb = 5;

//     head->next = n1;
//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     n4->next = NULL;

//     printf("LOW: %f\n", compute_disorder(head));

//     free(head);
//     free(n1);
//     free(n2);
//     free(n3);
//     free(n4);

//     /* MEDIUM: 10 mistakes / 45 pairs = 0.2222 */

//     head = malloc(sizeof(stack));
//     n1 = malloc(sizeof(stack));
//     n2 = malloc(sizeof(stack));
//     n3 = malloc(sizeof(stack));
//     n4 = malloc(sizeof(stack));

//     head->nb = 1;
//     n1->nb = 2;
//     n2->nb = 3;
//     n3->nb = 4;
//     n4->nb = 5;

//     head->next = n1;
//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     n4->next = NULL;

//     n1->nb = 10;
//     n2->nb = 9;
//     n3->nb = 8;
//     n4->nb = 7;

//     printf("MEDIUM: %f\n", compute_disorder(head));

//     free(head);
//     free(n1);
//     free(n2);
//     free(n3);
//     free(n4);

//     /* HIGH: Reverse sorted */

//     head = malloc(sizeof(stack));
//     n1 = malloc(sizeof(stack));
//     n2 = malloc(sizeof(stack));
//     n3 = malloc(sizeof(stack));
//     n4 = malloc(sizeof(stack));

//     head->nb = 10;
//     n1->nb = 9;
//     n2->nb = 8;
//     n3->nb = 7;
//     n4->nb = 6;

//     head->next = n1;
//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     n4->next = NULL;

//     printf("HIGH: %f\n", compute_disorder(head));

//     free(head);
//     free(n1);
//     free(n2);
//     free(n3);
//     free(n4);

//     return (0);
// }