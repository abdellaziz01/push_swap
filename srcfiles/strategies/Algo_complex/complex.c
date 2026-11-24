#include "hedear.h"
#include <stdio.h>

stack *node_index(stack *head , int index )
{
    while(head && head -> index != index)
        head = head -> next;
    return head;

}
void get_index(stack *head)
{
    int index;
    stack *list1;
    stack *list2;
    list1 = head;
    while(list1)
    {
        index = 0;
        list2 = list1;
        while(list2)
        {
            if(list2 -> nb < list1 -> nb)
                index++;
            list2 = list2 -> next;
        }
        list1 -> index = index;
        list1 = list1 -> next;
    }
}
static void shift_all(stack **s_a , int index , int nb)
{
    if(index <= (nb / 2))
    {
        while(index > 0)
        {
            ra(s_a);
            ft_putstr("ra\n");
            index--;
        }
    }
    else
    {
        index = nb - index ;
        while(index > 0)
        {
            rra(s_a);
            ft_putstr("rra\n");
            index--;
        }
    }  
}
 
int partition(stack **head , stack **head1, int lb , int ub)
{
    int pivot ;
    int start;
    int end;

    start = lb;
    end = ub;
    pivot =  (*head) -> index;
    while(start < end)
    {
        while (start <= ub && node_index(*head , start) -> index <= pivot)
            start++;
        while (end > lb && node_index(*head , end) > pivot)
            end--;
        if(start < end)
        {
            shift_all(head , node_index(*head , start) ,ub + 1);
            pb(head , head1);
            shift_all(head , node_index(*head , end) ,ub + 1);
            pa(head , head1);
        }
             
    }
    shift_all(head , node_index(*head , start) ,ub + 1);
    pb(head , head1);
    shift_all(head , node_index(*head , end) ,ub + 1);
    pa(head , head1);
    return end;
}
void quick_sort(void **head , int lb , int ub)
{   
    if(lb < ub)
    {
        int loc;
        loc = partition(head , lb , ub);
        quick_sort(head , lb , loc - 1);
        quick_sort(head , loc + 1 , ub);
    }
}
 
int	main(void)
{
	stack	*n1;
	stack	*n2;
	stack	*n3;
	stack	*n4;
	stack	*n5;
	stack	*s_a;

	n1 = ft_lstnew(7);
	n2 = ft_lstnew(6);
	n3 = ft_lstnew(10);
	n4 = ft_lstnew(5);
	n5 = ft_lstnew(9);
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	 quick_sort(n1 , 0 , 4);
     while(n1)
     {
        printf("%d ",n1 -> nb);
        n1 = n1 -> next;
     }
	return (0);
}