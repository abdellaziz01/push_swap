#include "hedear.h"
stack *return_nodes(int argc , char **argv )
{
    stack *res;
    stack *node;
    res = NULL;
    int i;
    i = 1;
    while(i < argc)
    {
        node = ft_lstnew(ft_atoi(argv[i]));
        ft_lstadd_back(&res , node);
        i++;
    }
    return res;
} 