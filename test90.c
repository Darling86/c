//漢諾塔
#include<stdio.h>
void hanoi(int n,char x, char y,char z);
void hanoi(int n,char x,char y,char z)
{
    if (n==1)
    {
        printf("%c-->%c\n",x,z);//剩下部分的那個圓盤
    }
    else
    {
        hanoi(n-1,x,z,y);//將n-1個圓盤從x移到y
        printf("%c-->%c\n",x,z);
        hanoi(n-1,y,x,z);//將n-1個圓盤從y移到z
    }
}
int main(void)
{
    int n;
    printf("請輸入漢諾塔的層數：");
    scanf("%d",&n);
    hanoi(n,'X','Y','Z');
    return 0;
}