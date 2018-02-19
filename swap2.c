#include <stdio.h>

int main(void) 
{
	int a,b,t;
printf("enter the number");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("swap numbers%d\t%d",a,b);
	return 0;
}
