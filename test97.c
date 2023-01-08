//
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,num;
    int count=0;
    int *ptr=NULL;//初始必須爲NULL
    do
    {
        printf("請輸入一個整數（輸入-1表示結束):");
        scanf("%d",&num);
        count++;
        ptr=(int*)realloc(ptr,count*sizeof(int));
        if(ptr==NULL)
        {
            exit(1);
        }
        ptr[count-1]=num;
    }while(num!=-1);
    printf("輸入的整數分別是:");
    for(i=0;i<count;i++)
    {
        printf("%d ",ptr[i]);
    }
    putchar('\n');
    free(ptr);
    return 0;
}