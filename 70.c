#include <stdio.h>
#include<math.h>
int main()
{
	int i,n,a,c,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=pow(2,i);
		if(a>n)
		{
			b=i;
			break;
		}
	}
	c=pow(2,b);
	printf("nearest greater power of 2 is:%d",c);
}
