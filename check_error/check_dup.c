#include "../hedear.h"
int check_dup(int argc , char **argv)
{
    int arr[argc - 1];
    int i;
    int j;
    
    i = 0;
    j = 1;
    while(i < argc - 1)
        arr[i++] = ft_atoi(argv[j++]);
    i = 0;
    j = 0;
    while(i < argc - 1)
    {
        j = i + 1;
        while(j < argc - 1)
        {
            if(arr[i] == arr[j])
                return -1;
            j++;
        }
        i++;
    }
    return 1;
}
