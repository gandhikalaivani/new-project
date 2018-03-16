#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int n,i;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<=n;i++)
{
    if(i%2==0)
    {
        printf("%c",a[i]);
        i++;
    }
}
printf("\t");
for(i=0;i<=n;i++)
{
    if(i%2!=0)
    {
        printf("%c",a[i]);
        i++;
    }
}
    return 0;
}
