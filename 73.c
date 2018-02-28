#include <stdio.h>

int main(void) {
	int a,b,n,count=0,i;
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	for(i=a+1;i<b;i++)
	{
		if(i==n)
		count=count+1;
	}
	if(count==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
