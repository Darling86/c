#include<stdio.h>
int main(void)
{
    int i,j ;
    for(j=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%-2d\n",i,j,i*j);
        }
        putchar('\n');
    }
    return 0;
}