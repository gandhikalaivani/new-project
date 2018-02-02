#include <stdio.h>

int main()
{
int n,rem,e=0,i,t;
printf("enter the value");
scanf("%d",&n);
while(n>0)
{
    rem=n%10;
    e=e+rem;
    n=n/10;
    t=n+e;
}
printf("%d",t);
    return 0;
}


