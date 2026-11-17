#include "../hedear.h"
int check(int nb , char **str)
{
    if(nb == 1)
        return 0;
    int i;
    i = 1;
    while(i < nb)
    {
        if(is_intger(str[i]) == -1)
            return -1;
        i++;
    }
    return 1;
}