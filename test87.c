//遞歸概念
#include<stdio.h>
void recursion(void);
void recursion(void)
{
    static int count = 5;
    printf("Hi!\n");
    if(--count)
    {
    recursion();
    }
}
int main (void)
{
    recursion();
    return 0;
}