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
    scanf("%f",&book->price);
    printf("请输入出版日期：");
    scanf("%d-%d-%d",&book->date.year,&book->date.month,&book->date.day);
    printf("请输入出版社：");
    scanf("%s",book->publisher);
}

void printBook(struct Book *book)
{
    printf("书名:%s\n",book->title);
    printf("作者:%s\n",book->author);
    printf("售价:%.2f\n",book->price);
    printf("出版日期:%d-%d-%d\n",book->date.year,book->date.month,book->date.day);
    printf("出版社：%s\n",book->publisher);
}

void initLibrary(struct Book *library[])
{
    int i;

    for ( i = 0; i < MAX_SIZE; i++)
    {
        library[i]=NULL;
    
    }
    
}

void printLibrary(struct Book *library[])
{
    int i;

    for ( i = 0; i < MAX_SIZE; i++)
    {
        if(library[i]!=NULL)
        {
            printBook(library[i]);
            putchar('\n');
        }
    }
    
}

void releaseLibrary(struct Book *library[])
{
    int i;

    for ( i = 0; i < MAX_SIZE; i++)
    {
        if(library[i]!=NULL)
        {
            free(library[i]);
        }
    }
    
}

int main()
{
    struct Book*library[MAX_SIZE];
    struct Book*ptr=NULL;
    int ch,index=0;

    initLibrary(library);

    while (1)
    {
        printf("请问是否需要录入图书信息(Y/N):");
        do
        {
            ch=getchar();
        } while (ch!='Y'&&ch!='N');
        if(ch=='Y')
        {
            if(index<MAX_SIZE)
            {
                ptr=(struct Book*)malloc(sizeof(struct Book));
                getInput(ptr);
                library[index]=ptr;
                index++;
                putchar('\n');
            }
            else
            {
                printf("该图书馆已满，无法录入新数据!\n");
                break;
            }
        }
        else
        {
            break;
        }
    }
    printf("\n录入完毕,现在开始打印验证...\n\n");
    printLibrary(library);
    releaseLibrary(library);

    return 0;
}