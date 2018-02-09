#include <stdio.h>

int main(void)
{
int a[10],i,n,min,max;
scanf("%d",&n);
printf("enter the numbers");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
	if(a[0]>a[i])
	min=a[i];
}
printf(" %d\t",min);
max=a[0];
for(i=0;i<n;i++)
{
	if(a[0]<a[i])
	max=a[i];
}
printf("%d\t",max);
	return 0;
}
