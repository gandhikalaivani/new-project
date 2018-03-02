#include <stdio.h>

int main(void) {
	char k[100];
	int i,count;
	printf("enter the string");
	scanf("%s",&k);
	for(i=0;k[i]!='\0';i++)
	{
	if(k[i]=='a'||k[i]=='e'||k[i]=='i'||k[i]=='o'||k[i]=='u')
	{
		count=1;
	}
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

