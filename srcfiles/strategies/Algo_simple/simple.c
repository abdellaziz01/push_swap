#include "hedear.h"
static int return_nothing(stack **s_a , stack **s_b)
{
    if(!s_a || !s_b)
        return 1;
    if(is_sorted(*s_a))
        return 1;
    if(count_nodes(*s_a) == 2)
    {
        sort_two(s_a);
        return 1;
    }
    if(count_nodes(*s_a) == 3)
    {
        sort_three(s_a);
        return 1;
    }
    return 0;
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
static void min_in_top(stack **s_a)
{
    int index;
    int nb;
    stack   *min_node;
    min_node = return_min(*s_a);
    nb = count_nodes(*s_a);
    index = index_min(*s_a);
    if(min_node == (*s_a))
        return ;
    shift_all(s_a , index , nb);
}


void simple_algo(stack **s_a , stack **s_b)
{
    int res;
    int temp;

    res = return_nothing(s_a , s_b);
    if(res == 1)
        return ;
    min_in_top(s_a);
    res = count_nodes(*s_a);
    temp = res;
    while(res != 3)
    {
        min_in_top(s_a);
        pb(s_a , s_b);
        ft_putstr("pb\n");
        res = count_nodes(*s_a);
    }
    sort_three(s_a);
    while(temp > 3)
    {
        pa(s_a , s_b);
        ft_putstr("pa\n");
        temp--;
    }
}
 
// #include <stdio.h>
// int main()
// {
//     stack *s_a = malloc(sizeof(stack));
//     stack *node1 = malloc(sizeof(stack));
//     stack *node2 = malloc(sizeof(stack));
//      stack *node3 = malloc(sizeof(stack));
//      stack *node4 = malloc(sizeof(stack));
//       stack *node5 = malloc(sizeof(stack));
//        stack *node6 = malloc(sizeof(stack));
//         stack *node7 = malloc(sizeof(stack));
//          stack *node8 = malloc(sizeof(stack));
      
//     s_a->nb = 1;
//     node1->nb =  2;
//     node2->nb =  3;
//     node3->nb =  5;
//      node4->nb =  4;
//      node5->nb =  6;
//      node6->nbr logout and login, + kat5dam ra f old intra version , v2 machi v3.  =  7;
//      node7->nb =  8;
//      node8->nb =  9;

//     s_a->next = node1;
//     node1->next = node2;
//      node2->next = node3;
//       node3->next =   node4;
//       node4->next =    node5;
//      node5->next =    node6;
//       node6->next =   node7;
//       node7->next =   node8;
//          node8->next = NULL;

    


//      stack *s_b =  NULL;
    
//     simple_algo(&s_a , &s_b);
//     while (s_a)
//     {
//         printf("%d\n", s_a->nb);
//         s_a = s_a->next;
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// static int	has_duplicate(stack *head, int nb)
// {
// 	while (head)
// 	{
// 		if (head->nb == nb)
// 			return (1);
// 		head = head->next;
// 	}
// 	return (0);
// }

// static stack	*make_node(int nb)
// {
// 	stack	*node;

// 	node = malloc(sizeof(stack));
// 	if (!node)
// 		return (NULL);
// 	node->nb = nb;
// 	node->next = NULL;
// 	return (node);
// }

// static void	add_back(stack **head, int nb)
// {
// 	stack	*node;
// 	stack	*tmp;

// 	node = make_node(nb);
// 	if (!node)
// 		return ;
// 	if (!*head)
// 	{
// 		*head = node;
// 		return ;
// 	}
// 	tmp = *head;
// 	while (tmp->next)
// 		tmp = tmp->next;
// 	tmp->next = node;
// }

// static void	clear_stack(stack **head)
// {
// 	stack	*tmp;

// 	while (head && *head)
// 	{
// 		tmp = (*head)->next;
// 		free(*head);
// 		*head = tmp;
// 	}
// }

// int	main(void)
// {
// 	stack	*s_a;
// 	stack	*s_b;
// 	int		i;
// 	int		val;

// 	s_a = NULL;
// 	s_b = NULL;
// 	srand((unsigned int)time(NULL));
// 	i = 0;
// 	while (i < 500)
// 	{
// 		val = (rand() % 1000000) - 500000;
// 		if (!has_duplicate(s_a, val))
// 		{
// 			add_back(&s_a, val);
// 			i++;
// 		}
// 	}
// 	simple_algo(&s_a, &s_b);
// 	if (is_sorted(s_a) && !s_b)
// 		printf("RESULT: OK\n");
// 	else
// 		printf("RESULT: KO\n");
// 	clear_stack(&s_a);
// 	clear_stack(&s_b);
// 	return (0);
// }