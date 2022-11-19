#include <stdio.h>
int main(void)
{
    char mark;

    printf("请输入你的成绩评级：");
    scanf("%c",&mark);

    switch (mark)
    {
    case  'A':printf("你的成绩在90分以上\n");
    break;

    case 'B':printf("你的成绩在80~90分\n");
     break;

    case 'C':printf("你的成绩在70~80分\n");
     break;

    case 'D':printf("你的成绩在60~70分\n");
     break;

    case 'E':printf("你的成绩在60分以下\n");
     break;
     
    default:printf("请输入有效的成绩评级\n");

    }
    return 0;
}