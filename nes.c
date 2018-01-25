#include <stdio.h>
#include<string.h>
int main() 
{
char a[57];
int count=0,i;
printf("enter the string");
scanf("%s",&a);
for(i=0;i<a[i]!='0';i++)
if(a>='0'&&a<='9')
{
	count++;
	printf("%d",count);
}
	return 0;
}

