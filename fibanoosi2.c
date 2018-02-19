#include <stdio.h>

int main(void)
{
int a=1,b=1,c,n;
printf("enter the number");
scanf("%d",&n);
printf("%d\t%d",a,b);
while(n>0)
{
	c=a+b;
	printf("\t%d",c);
	a=b;
	b=c;
	n--;
}
	return 0;
}
