#include <stdio.h>
#include "hedear.h"
 #include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
 
int main(int argc , char **argv)
{
    if(argc == 1)
        return 0;
    if(check(argc , argv) == -1 || check_dup(argc , argv) == -1)
    {
        write(2,"Error\n",6);
        return 0;
    }
    stack *s_a;
    stack *s_b;
    s_b = NULL;
    s_a =  return_nodes(argc ,argv);
    simple_algo(&s_a , &s_b);
    while(s_a)
    {
        printf("%d\n",s_a -> nb);
        s_a =  s_a ->  next;
    }
     return 0;
}

 