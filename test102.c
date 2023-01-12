#include<stdio.h>
#define SQUARE(x)((x)*(x))
int main(void)
{
    int x;
    printf("請輸入一個整數:");
    scanf("%d",&x);
    printf("%d的平方是%d\n",x,SQUARE(x));
    printf("%d的平方是%d\n",x+1,SQUARE(x+1));
    return 0;
}