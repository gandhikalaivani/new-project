#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>='0'&&a<='infinity')
	{
		printf("numeric",a);
	}
	else
	{
		printf("not numeric",a);
	}
	return 0;
	
}
