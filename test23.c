#include <stdio.h>
int main(void)
{
    int count=0;
    printf("请输入一句英文句子:");
    while (getchar()!='\n')
    {
      count=count+1;
    }
    printf("你总共输入了%d个字符\n",count);
    return 0;
}