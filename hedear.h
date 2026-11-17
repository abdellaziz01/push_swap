#ifndef HEADER_H
#define HEADER_H
#include <unistd.h>

typedef struct stack_a{
    int nb;
    struct  stack_a *next;
}t_popo;

int check(int nb , char **str);
long ft_atoi(char *str);
int is_intger(char *str);
int check_dup(int nb , char **str);
#endif