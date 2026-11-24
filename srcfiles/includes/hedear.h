#ifndef HEDEAR_H
#define HEDEAR_H
 
#include <unistd.h>
#include <stdlib.h>
typedef struct list{
    int nb;
    int index;
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
void rrr(stack **head , stack **head1);
void sa(stack **head);
void sb(stack **head);
void ss(stack **head , stack **head1);
int is_sorted(stack *head);
stack *return_min(stack *head);
void ft_putstr(char *str);
int count_nodes(stack *head);
int index_min(stack *head);
void simple_algo(stack **s_a , stack **s_b);
void sort_three(stack **head);
void  sort_two(stack **head);
void simple_algo(stack **s_a , stack **s_b);
void quick_sort(void **head , int lb , int ub);
stack	*ft_lstnew(int n);
stack	*ft_lstlast(stack *lst);
void	ft_lstadd_back(stack **lst, stack *new);
stack *return_nodes(int argc , char **argv );
int main(int argc , char **argv);
#endif