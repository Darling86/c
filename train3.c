#include<stdio.h>
int main (void)
{
   int i ,j,n;
   double sum;

   printf("Enter n:");
   scanf("%d",&n);
   sum=0;
 if(n>0)
 {
   for ( i = 1; i <= n; i++)
   {
    sum=sum+(1.0/i);
   }
   printf("sum=%f\n",sum);
 }
 else
 {
    printf("Invalid number\n");
 }
   return 0;
}