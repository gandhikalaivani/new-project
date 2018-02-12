#include <stdio.h>
#include<string.h>
int main() 
{
int len1,len2;
char a[100]="laptop";
char b[100]="hello";
len1=strlen(a);
len2=strlen(b);
if(len1>len2)
{
	printf("%s",a);
}

else
{
	printf("%s",b);
}
return 0;
}
