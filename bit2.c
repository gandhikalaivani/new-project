#include <stdio.h>

int main(void) 
{
	int a,b;
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("swap the numbers%d\t%d",a,b);
	return 0;
}
