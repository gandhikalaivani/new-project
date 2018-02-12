#include <stdio.h>
int main()
{
	int n,a,b;
	scanf("%d%d",&n,&a);
	b=n*a;
	printf("%d\n",b);
	if(b%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
