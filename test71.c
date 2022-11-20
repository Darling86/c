#include<stdio.h>
void get_array(int b[10]);
void get_array(int b[10])
{
    int i;
    printf("b:%p\n",b);
    printf("size of b:%ld\n",sizeof(b));
    printf("addr of b:%p\n",&b);
}
int main(void)
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    printf("a:%p\n",a);
    printf("size of a:%ld\n",sizeof(a));
    printf("addr of a:%p\n",&a);
    get_array(a);
    return 0;
}
//结果显示形参b只是一个指针变量（占4个字节），它存放的是传递过来的数组首元素的地址