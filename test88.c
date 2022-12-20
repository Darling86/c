//循環求階乘
#include<stdio.h>
long fact(int num);
long fact (int num)
{
    long result;
    for (result = 1;num > 1;num--)
    {
        result *= num;
    }
    return result;
}
int main(void)
{
    int num;
    printf("請輸入一個正整數：");
    scanf("%d",&num);
    printf("%d的階乘是：%ld\n",num,fact(num));
    return 0;
}