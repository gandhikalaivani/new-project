#include <stdio.h>
int main()
{
	int a=0,i,n,nextterm,b=1;
	printf("enter the number");
	scanf("%d",&n);
	printf(" fibonacci series");
	for(i=1;i<=n;++i)
	{
	printf("%d",a);
	nextterm=a+b;
	a=b;
	 b=nextterm;
	}

	return 0;
}
