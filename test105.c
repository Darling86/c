//訪問結構體成員
#include<stdio.h>

struct Book
{
    char title[128];
    char author[40];
    float price;
    unsigned int date;
    char publisher[40];
};

int main(void)
{
    struct Book book;

    printf("請輸入書名:");
    scanf("%s",book.title);

    printf("請輸入作者:");
    scanf("%s",book.author);

    printf("請輸入售價:");
    scanf("%f",&book.price);

    printf("請輸入出版日期:");
    scanf("%u",&book.date);

    printf("請輸入出版社:");
    scanf("%s",book.publisher);

    printf("\n=====數據錄入完畢=====\n\n");

    printf("書名:%s\n",book.title);
    printf("作者:%s\n",book.author);
    printf("售價:%.2f\n",book.price);
    printf("出版日期:%u\n",book.date);
    printf("出版社:%s\n",book.publisher);

    return 0;
}