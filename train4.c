#include<stdio.h>
int main(void)
{
	int a,b,c,temp;
	printf("Enter a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	if(a>c){
		temp=a;
		a=c;
		c=temp;
	
	}
	if(b>c){
		temp=b;
		b=c;
		c=temp;
	}
	printf("%d<%d<%d\n",a,b,c);
	return 0;
 } 
