#include <stdio.h>
#define NAME  "鱼C工作室的域名:"
int main(void)
{
    char str[128];
    printf("请输入%s",NAME);
    scanf("%s",str);
    printf("%s %s\n",NAME,str);

    printf("str的地址是:%p\n",str);
    printf("str[0]的地址是:%p\n",&str[0]);

    return 0;
}