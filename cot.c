#include <stdio.h>

int main()
{
char ch[40]="laptop is good";
int count=0,i,word;
for(i=0;ch[i]!=0;i++)
{
if(ch[i]='a to z'&&'A to Z')
count=++count;
else
count=count;
}
word=count;
printf("%d",word);
	return 0;
}
