#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[3]="S";//注意[]内一定要有大小，并且大于需要输出的大小，不然只输出一个
    char str2[]="B";
    strcat(str1," ");
    strcat(str1,str2);

    printf("%s\n",str1);

    return 0;

}