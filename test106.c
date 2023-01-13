//對比對齊(test107.c)
#include<stdio.h>

int main(void)
{
    struct A
    {
        char a;
        int b;
        char c;
    }a={'x',520,'o'};
    
    printf("size of a = %ld\n",sizeof(a));

    return 0;
}

