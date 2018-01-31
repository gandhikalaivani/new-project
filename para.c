#include <stdio.h>
#include<string.h>
int main()
{
	char a[100]=("hello world.goodbye");
	int i,count=0;
	for(i=0;a[i]!='\0';i++)
	{
	if(a[i]=='.')
	count=count+1;
	}
printf("count the line %d",count+1);

	return 0;
}
