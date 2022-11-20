#include<stdio.h>
int main(void)
{
    int num = 520;
    const int cnum = 888;
    const  int *const p =& num;

    printf("*p=%d\n",*p);

    num=1024; //修改的不是指针而是num
    printf("*p=%d\n",*p);//正常编译，应该只是指针不能修改，但是指向的数可以修改，没有const修饰

    return 0;
}