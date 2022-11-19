#include<stdio.h>
int main(void)
{
    int i;
    char j;
    float k;

     i=123;
     j='C';
     k=3.14;

     printf("size of int is %ld\n",sizeof(int));
     printf("size of i is %ld\n",sizeof (i));
     printf("size of char is %ld\n",sizeof(char));
     printf("size of j is %ld\n",sizeof j);
     printf("size of float is %ld\n",sizeof(float ));
     printf("size of k is %ld\n",sizeof k);
    
     return 0;
}
