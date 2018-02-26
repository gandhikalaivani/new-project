#include <stdio.h>

int main()
{
char a[100];
int i,count=1;
printf("enter the string");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
    if(a[i]==' ')
{
    count++;
}
}
printf("%d",count);
    return 0;
}

