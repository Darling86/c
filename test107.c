//對比對齊(test106.c)
#include<stdio.h>
int main(void)
{
    struct A
    {
        char a;
        char c;
        int b;
    }a={'x',5,'o'};
    
    printf("size of a = %ld\n",sizeof(a));

    return 0;
}