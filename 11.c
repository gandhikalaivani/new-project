#include <stdio.h>
int main(void)
{
int n,i=0,count=0,b[10],rem,sum=0;
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
sum=sum+b[i];
}
printf("%d",sum);
	return 0;
}
