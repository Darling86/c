#include <stdio.h>
int main (void)
{
    int a=3 ,b=3;
    (a=0) && (b=5);
    printf("a=%d,b=%d\n",a,b);//a假，忽略b=5
    (a=0) || (b=5);
    printf("a=%d,b=%d\n",a,b);//a假，那么b一定是真；如果a=1，属真，那么b直接忽略

    return 0;
}