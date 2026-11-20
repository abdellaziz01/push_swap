#ifndef HEDEAR_H
#define HEDEAR_H
 
#include <unistd.h>
#include <stdlib.h>
typedef struct list{
    int nb;
    struct list *next;
}stack;
 

int check(int nb , char **str);
long ft_atoi(char *str);
int is_intger(char *str);
int check_dup(int nb , char **str);
void pa(stack **head , stack **head1);
void pb(stack **head , stack **head1);
void ra(stack **head);
void rb(stack **head);
void rr(stack **head , stack **head1);
void rra(stack **head);
void rrb(stack **head);
void rrr(stack *head , stack *head1);
void sa(stack **head);
void sb(stack **head);
void ss(stack **head , stack **head1);
int is_sorted(stack *head);
#endif