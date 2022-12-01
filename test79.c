//局部变量与全局变量的区别
#include<stdio.h>
void func(void);
int a=520,b=1314;
void func(void)
{
    int b;
    a=880;
    b=120;
    printf("In func,a=%d,b=%d\n",a,b);
}
int main(void)
{
    printf("In main,a=%d,b=%d\n",a,b);
    func();
    printf("In main, a=%d,b=%d\n",a,b);
    return 0 ;
}
//不要大量使用全局变量，会占用更多的内存、污染命名空间