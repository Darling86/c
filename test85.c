//static和extern
#include<stdio.h>
int count;
void func(void)
{
    printf("count=%d\n",count);
}
void func(void);
int count=520;
int main (void)
{
    func();
    return 0;
}