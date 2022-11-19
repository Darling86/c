#include<stdio.h>
int main(void)
{
    int ch;
    while ((ch=getchar())!='\n')
    {
        if (ch=='C')
        {
           continue;
        }
        putchar(ch);
    }
    putchar('\n');
    
    return 0;
}