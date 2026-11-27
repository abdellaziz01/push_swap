#include <stdio.h>
#include "hedear.h"
static void geve_index(stack **s_a)
{
	int index;
	stack *node1;
	stack *node2;
	node1 = (*s_a);
	while(node1)
	{
		index = 0;
		node2 = (*s_a);
		while(node2)
		{
			if(node1 -> nb > node2 -> nb)
				index++;
			node2 = node2 -> next;
		}
		node1 -> index = index;
		node1 = node1 -> next;
	}
}
 
static int great_index(stack *s_a)
{
	int max;
	stack *node1;

	max = s_a -> index;
	node1 =  s_a;
	while (node1)
	{
 		if(max < node1 -> index)	
			max = node1 -> index;
		node1 = node1-> next;
	}
	return max;
}
static int decimal_to_b(int nb)
{
	int res;
	res = 0;
	while(nb > 0)
	{
		res = res  * 10 + (nb % 2);
		nb = nb / 2;
	}
	return res;
}
static int call_f(int res)
{
	int call;
	call = 0;
	while(res > 9)
	{
		call++;
		res /=10;
	}
	return call + 1;
}
void radix_sort(stack **s_a , stack **s_b)
{
	geve_index(s_a);
	int call;
	call = call_f(decimal_to_b((great_index((*s_a)))));
	 
	int i;
	int j;
	int x;
	int size;
	size = count_nodes(*s_a);
	i = 0;
	while(i < call)
	{
		x = 0;
		j = 0;
		while(j < size)
		{
			int nb;
			nb = (*s_a) -> index; 
			 
			if(((nb >> i) & 1) == 0)
			{
				pb(s_a , s_b);
				x++;
				ft_putstr("pb\n");
			}
			else
			{
				ra(s_a);
				ft_putstr("ra\n");
			}
			j++;
		}
		while(x > 0)
		{
			pa(s_a , s_b);
			x--;
		}
		i++;
	}
	
}