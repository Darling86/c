//不帶參數的宏定義
#include<stdio.h>

#define R 6371
#define PI 3.14
#define V = PI*R*R*R*4/3

int main(void)
{
    printf("地球的體積大概是:%.2f\n",V);
    return 0;
}