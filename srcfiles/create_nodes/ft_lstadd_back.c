#include "hedear.h"
void	ft_lstadd_back(stack **lst, stack *new)
{
	stack	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}