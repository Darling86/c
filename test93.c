//動態內存管理free--釋放動態內存空間
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int *ptr;
    ptr=(int*)malloc(sizeof(int));
    if(ptr==NULL)
    {
        printf("分配內存失敗！\n");
        exit(1);
    }
    printf("請輸入一個整數：");
    scanf("%d",ptr);
    printf("你輸入的整數是：%d\n",*ptr);
    free(ptr);//釋放內存，不然會造成內存泄漏
    return 0;
}