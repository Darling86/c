//求證棧的發展方向是從高地址向低地址發展
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *ptr1 = NULL;
    int *ptr2 = NULL;

    ptr1=(int*)malloc(sizeof(int));
    ptr2=(int*)malloc(sizeof(int));

    printf("stack(棧):%p -> %p\n",&ptr1,&ptr2);
    printf("heap(堆):%p -> %p\n",ptr1,ptr2);
    
    return 0;
}