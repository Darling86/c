//遞歸求階乘
#include<stdio.h>
long fact(int num);
long fact(int num)
{
    long result;
    if(num>0)
    {
        result = num*fact(num-1);
    }
    else
    {
        result=1;
    }
    return result;
}
int main(void)
{
    int num;
    printf("請輸入一個正整數：");
    scanf("%d",&num);
    printf("%d的階乘是:%ld\n",num,fact(num));
    return 0;
}
//普通程序員用迭代，天才程序員用遞歸
//用遞歸難讀，平常用迭代就好