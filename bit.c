#include<stdio.h>
int main()
{

	int a,t;
	printf("enter the numbers");
	scanf("%d%d",&a,&t);
	a=a^t;
	t=a^t;
	a=a^t;
	printf("swap two numbers %d\t%d",a,t);
	return 0;
}
