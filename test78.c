//全局变量
#include<stdio.h>
void a (void);
void b(void);
void c(void);
int count = 0;//全局变量
void a (void)
{
    count++;
}
void b(void)
{
    count++;
}
void c(void)
{
    count++;
}
int main(void)
{
    a();
    b();
    c();
    b();
    printf("豆豆今天被打了%d次!\n",count);
    return 0;
}