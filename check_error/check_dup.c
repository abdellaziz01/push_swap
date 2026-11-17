#include "../hedear.h"
int check_dup(int nb , char **str)
{
    int arr[nb - 1];
    int i;
    int j;
    
    i = 0;
    j = 1;
    while(i < nb - 1)
        arr[i++] = ft_atoi(str[j++]);
    i = 0;
    j = 0;
    while(i < nb - 1)
    {
        j = i + 1;
        while(j < nb - 1)
        {
            if(arr[i] == arr[j])
                return -1;
            j++;
        }
        i++;
    }
    return 1;
}
