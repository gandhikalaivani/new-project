#include <stdio.h>
#include<string.h>
int main()
{
char a[100];
int n,i;
printf("enter the string:");
scanf("%s",a);
printf("enter the number:");
scanf("%d",&n);
for (i=0;i<n;i++)
{
    printf("%c",a[i]);
}
    return 0;
}
