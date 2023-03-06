//动态申请结构体
#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100

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
};

void getInput(struct Book *book);
void printBook(struct Book *book);
void initLibrary(struct Book *library[]);
void printLibrary(struct Book *library[]);
void releaseLibrary(struct Book *library[]);

void getInput(struct Book *book)
{
    printf("请输入书名：");
    scanf("%s",book->title);
    printf("请输入作者：");
    scanf("%s",book->author);
    printf("请输入售价：");
    scanf("%f",book->price);
    printf("请输入出版日期：");
    scanf("%d-%d-%d",&book->date.year,&book->date.month,&book->date.day);
    printf("请输入出版社：");
    scanf("%s",book->publisher);
}

void printBook(struct Book *book)
{
    
}