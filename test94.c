//申請任意尺寸的內存空間malloc
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int *ptr=NULL;
    int num ,i;
    printf("請輸入待錄入整數的個數：");
    scanf("%d",&num);
    ptr=(int*)malloc(num*sizeof(int));
    for(i=0;i<num;i++)
    {
        printf("請輸入第%d個整數:",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("你錄入的整數是：");
    for(i=0;i<num;i++)
    {
        printf("%d ",ptr[i]);
    }
    putchar('\n');
    free(ptr);
    return 0;
}