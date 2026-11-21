#include "hedear.h"
int check(int argc , char **argv)
{
    if(argc == 1)
        return 0;
    int i;
    i = 1;
    while(i < argc)
    {
        if(is_intger(argv[i]) == -1)
            return -1;
        i++;
    }
    return 1;
}