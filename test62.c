#include<stdio.h>
int main (void)
{
    int num = 520;
    const int cnum = 880;
    const int *pc = &cnum;

    printf("cnum:%d,&cnum:%p\n",cnum,&cnum);
    printf("*pc:%d\n,pc:%p",*pc,pc);

    num = 1024;   //if *pc=1024 这是禁止的，无法修改const修饰的变量
    printf("*pc:%d\n",*pc);
    printf("num:%d\n",num);
    
    return 0;

}