#include <stdio.h>
int main(void)
{
int n,i=0,count=0,b[10],rem;
scanf("%d",&n);
while(n>0)
{
	rem=n%10;
	b[i]=rem;
	i++;
	count++;
	n=n/10;
}
for(i=count-1;i>=0;i--)
{
	printf("%d\t",b[i]);
}
	return 0;
}
