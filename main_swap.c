#include <stdio.h>
#include "hedear.h"
 
int main(int argc , char **argv)
{
  
  
  
  
 
    printf("Hello World");
 
    if(argc == 1)
        return 0;
    if(check(argc , argv) == -1 || check_dup(argc , argv) == -1)
    {
        write(2,"Error\n",6);
        return 0;
    }
 
    return 0;


}