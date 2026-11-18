#include <stdio.h>
#include "hedear.h"
 
int main(int argc , char **argv)
{
    if(argc == 1)
        return 0;
    if(check(argc , argv) == -1 || check_dup(argc , argv) == -1)
    {
        write(2,"Error\n",6);
        return 0;
    }
    stack_a *head1;
    stack_b *head2;
    head1 = NULL;
    head2 = NULL;
    
}