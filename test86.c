//static和extern
#include<stdio.h>
extern int count;
void func(void)
{
    printf("count=%d\n",count);
}
extern void func(void);
int count =520;
int main (void)
{
    func();
}