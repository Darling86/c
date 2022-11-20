//函数热身p125
#include<stdio.h>
void print_C(void);//函数声明
//定义函数开始
void print_C(void)
{
    printf("  #####    \n");
    printf("##     ##\n");
    printf("##              \n");
    printf("##              \n");
    printf("##              \n");
    printf("##     ##\n");
    printf(" ######  \n");
}
//定义函数结束
int main(void)
{
    print_C();//函数调用,打印多个只需要调用多次

    return 0;
}
//先定义再调用，编译器从上到下执行