#include "hedear.h"
int is_intger(char *str)
{
    long nb = ft_atoi(str);
    if(nb >= -2147483648 && nb <= 2147483647)
        return 1;
    return -1;   
}