//使用指针的例子
#include<stdio.h>
void swap(int *x,int *y);
void swap(int *x,int *y)
{
    int temp;

    printf("In swap,互换前:x=%d,y=%d\n",*x,*y);
    temp = *x;
    *x=*y;
    *y=temp;
    printf("In swap,互换后:x=%d,y=%d\n",*x,*y);
}
int main(void)
{
    int x=3,y=5;

    printf("In main,互换前:x=%d,y=%d\n",x,y);
    swap(&x,&y);//指针需要用到&取址符
    printf("In main,互换后:x=%d,y=%d\n",x,y);

    return 0;
    
}