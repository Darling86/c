#include<stdio.h>
int main (void)
{
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    int *p = array;
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d\n",*(p+i));
    }
    return 0;
}