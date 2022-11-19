#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[10]="SB";
    char str2[20]="SB";
    if (!strcmp(str1,str2))
    {
        printf("两个字符完全一致\n");
    }
    else
    {
        printf("两个字符不同\n");
    }

    return 0;
}