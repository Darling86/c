//sum函数,计算1+2+3+...+(n-1)+n的值
#include <stdio.h>
int sum(int);
int sum (int n)
{
    int result = 0;
    do
    {
        result += n;
    } while (n-->0);
    return result;
}
int main(void)
{
    int n;
    printf("请输入n的值:");
    scanf("%d",&n);
    printf("1+2+3+...+(n-1)+n=%d\n",sum(n));

    return 0 ;
}