//定義內聯函數
#include<stdio.h>
inline int square(int x);
inline int square(int x)
{
    return x*x;
}
int main(void)
{
    int i=1;
    while(i<=10)
    {
        printf("%d的平方是%d\n",i-1,square(i++));
    }
    return 0;
}