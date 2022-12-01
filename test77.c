//局部变量
#include<stdio.h>
int main(void)
{
int  i;
i=520;
printf("before,i=%d",i);
for (int i=0;i<10;i++)
{
    printf("%d\n",i);
}
printf("after,i=%d\n",i);

return 0;
}