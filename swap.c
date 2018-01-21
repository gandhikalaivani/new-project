#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a=7,b=6;
	printf("swap two numbers using fuction");

	scanf("%d%d",&a,&b);
	printf("%d%d before swapping",a,b);
	
	swap(&a,&b);
	printf("%d%d after swapping",a,b);
	return 0;
	
}
void swap(int *o,int *p)
{
	int temp;
	temp=*o;
	*o=*p;
	*p=temp;
}	
