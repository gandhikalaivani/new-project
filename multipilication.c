#include <stdio.h>
int main()
{
    int n,rem,sum=1;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum*rem;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
