#include <stdio.h>
int main(void)
{
    int i=1,sum=0;
    do
    {
     sum=sum+i;
      i=i+1;
    } while (i<=100);
    printf("结果是：%d\n",sum);
    return 0;
}