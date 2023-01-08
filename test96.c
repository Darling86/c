//realloc
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int *ptr1=NULL;
    int *ptr2=NULL;
    //第一次申請的內存空間
    ptr1=(int*)malloc(10*sizeof(int));
    //進行若幹操作後發現ptr1申請的空間不夠用...
    //第二次申請的內存空間
    ptr2=(int*)malloc(20*sizeof(int));
    //將ptr1的數據復制到ptr2中
    memcpy(ptr2,ptr1,10);
    free(ptr1);
    //對ptr2申請的內存空間進行若幹操作...
    free(ptr2);
    return 0;
}