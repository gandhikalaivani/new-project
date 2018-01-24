#include <stdio.h>

int main()
{
char ch[40]="hello world";
int count=0,i,word;
for(i=0;ch[i]!=0;i++)
{
if(ch[i]==' ')
count=++count;
else
count=count;
}
word=count+1;
printf("%d",word);
	return 0;
}
