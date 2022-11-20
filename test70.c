//传数组只是传地址
#include<stdio.h>
void get_array(int a[10]);
void get_array(int a[10])
{
    int i;
    for(i=0;i<10;i++)
    {
        a[5]=250;
        printf("a[%d]=%d\n",i,a[i]);
    }
}
int main(void)
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    get_array(a);
    int i;
    printf("在main函数里也打印一次\n");
    for(i=0;i<10;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);

    }
    return 0;
}