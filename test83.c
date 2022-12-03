//寄存器变量
#include<stdio.h>
int main(void)
{
    register int i=250;
    printf("Addr of i is :%p\n",i);

    return 0;
}
//编译后发现报错，因为将变量声明为寄存器变量
//就没办法通过取址运行符（&）获得该变量地址