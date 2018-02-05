#include <stdio.h>
int main(void)
{
	int a[10],i,s=0,c,n,avg;
	printf("enter the value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	s=s+a[i];
	}
		avg=s/n;
	printf("avg is%d:",avg);
	return 0;
}
