#include<stdio.h>
void func(void)
{
    extern int count;
    count++;
}
int count=0;
int main(void)
{
    func();
    printf("%d\n",count);
    return 0;
}