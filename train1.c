#include <stdio.h>
int main(void)
{
    int password;
  
    do
    {  
    printf("请输入密码：");
    scanf("%d",&password);
    } while (password!=123456);
    printf("密码正确！\n");
    return 0;
}