#include <stdio.h>
#include<string.h>
int main(void) {
	int n,count=0,i;
	char a[100];
	scanf("%s",a);
	n=strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
	    if(a[i]==a[n-1-i])
	    {
	        count++;
	    }
	}
	if(n==count)
	{
	    printf("yes");
	}
	else
	{
	   printf("no") ;
	}
	
	return 0;
}
