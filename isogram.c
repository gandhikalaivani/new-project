#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int n,i,count=0;
scanf("%s",a);
n=strlen(a);
for(i=0;a[i]!='\0';i++)
{
    if(a[i]==a[n-i-1])
    {
    count++;
}
}
if(count==0)
printf("yes");
else
    printf("no");
return 0;
}
