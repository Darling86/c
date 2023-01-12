//帶參數的宏定義
#include<stdio.h>
#define MAX(x,y)(((x)>(y))?(x):(y))
int main(void)
{
    int x,y;
    printf("請輸入兩個整數：");
    scanf("%d%d",&x,&y);
    printf("%d是比較大的那個\n",MAX(x,y));
    return 0;
}