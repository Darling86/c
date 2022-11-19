#include<stdio.h>
int main (void)
{
    int num = 520;
    const int cnum = 880;
    const int *pc = &cnum;

    printf("cnum:%d,&cnum:%p\n",cnum,&cnum);
    printf("*pc:%d\n,pc:%p",*pc,pc);
}