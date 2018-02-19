#include <stdio.h>
#include<string.h>
int main(void) 
{
char b[100]="helloworld.123";
int alpapet=0,number=0,n,i;
n=strlen(b);
for(i=0;i<n;i++)
{
if((b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')||(b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U'))
{
alpapet=1;
}
if(b[i]>='1'||b[i]<='9')
{
	number=1;
}
}
if(alpapet==1&&number==1)
{
	printf("yes");
}
else
{
	printf("no");
}
	return 0;
}
