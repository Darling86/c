//結構體嵌套
#include<stdio.h>
struct Date
{
    int year;
    int month;
    int day;
};
struct Book
{
    char title[128];
    char author[40];
    float price;
    struct Date date;
    char publisher[40];
}book={
    "《帶你學C帶你飛》",
    "小甲魚",
    49.5,
    {2016,11,11},
    "清華大學出版社"
};

int main(void)
{
    printf("書名:%s\n",book.title);
    printf("作者:%s\n",book.author);
    printf("售價:%.2f\n",book.price);
    printf("出版日期:%d-%d-%d\n",book.date.year,book.date.month,book.date.day);
    printf("出版社:%s\n",book.publisher);

    return 0;
}