#ifndef HEDEAR_H
#define HEDEAR_H
 
#include <unistd.h>
#include <stdlib.h>
typedef struct list_a{
    int nb;
    struct list_a* next;
}stack_a;
 
typedef struct list_b{
    int nb;
    struct  list_b* next;
}stack_b;

int check(int nb , char **str);
long ft_atoi(char *str);
int is_intger(char *str);
int check_dup(int nb , char **str);
#endif