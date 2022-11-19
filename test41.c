#include <stdio.h>
int main (void)
{
    int a;
    int  *p=&a;                                                       //p用了a的地址;记得给&，指针的初始化要给&
     
    printf("请输入一个整数:");
    scanf("%d",&a);                                      //因为该处需要用到a的地址，所以需要&
    printf("a=%d\n",a);

    printf("请再输入一个整数:");
    scanf("%d",p);                                   //因为p用的是a的地址，所以不能加&
    printf("a=%d\n",a);
    
    printf("%p\n",&a);
    printf("%p\n",&*p);  //从结果显然看得出p的地址指向a的地址，终究还是使用a的地址

    return 0;
}