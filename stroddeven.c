#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int n;
    printf("enter the string");
    scanf("%s",a);
    n=strlen(a);
    if(n%2==0)
    {
        a[(n/2)-1]='*';
        a[n/2]='*';
        printf("%s",a);
    }
    else
    {
        a[n/2]='*';
        printf("%s",a);
    }

    
    return 0;
}
