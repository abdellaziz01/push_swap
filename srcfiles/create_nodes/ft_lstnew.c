#include "hedear.h"
stack	*ft_lstnew(int n)
{
	stack	*new;

	new = malloc(sizeof(stack));
	if (!new)
		return (NULL);
	new-> nb = n;
	new -> index = 0;
	new->next = NULL;
	return (new);
}