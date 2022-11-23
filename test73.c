//指针函数
#include<stdio.h>
char *gw(char c);
char *gw(char c)
{
    switch (c)
    {
    case 'A':return"apple";
    case 'B':return"banana";
    case 'C': return"cat";

    default:  return "None";
    }
}
int main (void)
{
    char input;
    printf("请输入一个字符：");
    scanf("%c",&input);
    printf("%s\n",gw(input));
    return 0 ;

}