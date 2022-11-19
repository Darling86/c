#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[]="To do or not to do";
    char str2[30];

    strncpy(str2,str1,10);//这里的数字必须大于或等于下一行数字
    str2[5]='\0';//该处决定输出多长字符，并且追加结束符
    printf("%s\n",str2);

   return 0;
}