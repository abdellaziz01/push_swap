#include "../hedear.h"
long ft_atoi(char *str)
{
    int i;
    int kayn;
    long res;

    res = 0;
    kayn = 1;
    i = 0;
    while(str[i] == 32 ||  (str[i] >= 9 && str[i] <= 13) && str[i] != '\0')
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            kayn = -1;
        i++;
    }
    if(!(str[i] >= '0' && str[i] <= '9'))
        return (2147483648);
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    if(!(str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
        return (2147483648);
    return res * (kayn);
}
