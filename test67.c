//max函数，
#include<stdio.h>
int max(int,int);
int max(int x, int y)
{
    if (x>y)
    return x;//程序一旦执行return语句，表明函数返回，后面的代码不会继续执行
    else
    return y;
}
int main (void)
{
    int x,y,z;
    printf("请输入两个整数（中间用空格隔开）：");
    scanf("%d %d",&x,&y);//用空格分隔，输入时要用空格分隔两个数
    z=max(x,y);//不能敲成max(int x,int y),不能空
    printf("它们中较大的值是：%d\n",z);

    return 0;

}