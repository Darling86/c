#include<stdio.h>
int main(void)
{
    int array[3][4]={
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}};
        /*int **pp=array;*/
        int i,j;
        for ( i = 0; i < 3; i++)
        {
            for(j=0;j<4;j++)
        {
            printf("%3d",*(*(array+i)+j));

        }
        printf("\n");
        }
    return 0;
}