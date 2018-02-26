
#include <stdio.h>
#include<string.h>
int main() {
	char a[10],count,i;
	printf("enter the numbers");
		scanf("%s",&a);
		for(i=0;i<a[i];i++)
		{
	if((a[i]=='1')||(a[i]=='0'))
	{
		count=1;
	}
	else
	{
	    count=0;
	}
		}
	if(count==1)
	{
		printf("binary values representation");
	}
	else
	{
		printf("not a binary value represendation");
	}
	return 0;
}


