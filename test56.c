#include<stdio.h>
int main (void)
{
    int a=6;
    int *p1=&a;
    int *p2 = NULL;
    printf("%d\n",*p1);
    printf("%d\n",*p2);

    return 0;
}