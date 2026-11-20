#include "../hedear.h"
void swap_two(int *a , int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int *bubble_sort(int *arr , int size)
{
    int i;
    int temp;
    while(size > 0)
    {
        i = 0;
        while(i + 1 < size)
        {
            if(arr[i] > arr[ i+ 1])
            {
                swap_two(&arr[i] , &arr[i + 1]);
            }
            i++;
        }
        size--;
    }
    return arr;
}
 
   
