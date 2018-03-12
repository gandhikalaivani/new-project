#include <stdio.h>

int main(void) {
	int n,rem,b[100],i,s=0;
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		if(rem%2!=0)
		{
			b[s]=rem;
			s++;
		}
		n=n/10;
	}
	for(i=s-1;i>=0;i--)
	{
		printf(" %d",b[i]);
	}
	
	return 0;
}
