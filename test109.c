//6.5.1传递结构体变量(直接赋值)
#include<stdio.h>

int main(void)
{
    struct Test
    {
        int x;
        int y;
    }t1,t2;

    t1.x=3;
    t1.y=4;

    t2=t1;

    printf("t1.x=%d,t2.y=%d\n",t2.x,t2.y);

    return 0;
}