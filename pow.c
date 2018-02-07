#include <stdio.h>

int main(void)
{
int n,flag=0;
printf("enter the number\n");
scanf("%d",&n);
while(n!=1)
{
	if(n%2!=0)
	{
	flag=1;
	break;
	}

n=n/2;
}
if(flag==0)
{
	printf("yes");
}
else
{
printf("no");
}
	return 0;
}
