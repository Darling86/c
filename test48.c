#include<stdio.h>
int main(void)
{
    int a =1;
    int b =2;
    int c =3;
    int d =4;
    int e =5;
    int  *pl[5] ={&a,&b,&c,&d,&e};
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",*pl[i]);
    }
    return 0;
}