#include "hedear.h"
void ft_putstr(char *string)
{
    while(*string)
        write(1,string++,1);
}