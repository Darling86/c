#include <stdio.h>
int main(void)
{
    int i ,j;
    for(i=0,j=10;i<j;i++,j--);
    printf("%d\n",i);

    return 0;
}