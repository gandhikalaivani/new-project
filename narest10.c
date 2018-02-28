
#include <stdio.h>
int main()
{
int n,rem;
scanf("%d",&n);
if(n=='0'||n=='1'||n=='2'||n=='3'||n=='4'||n=='4'||n=='5'||n=='6'||n=='7'||n=='8'||n=='9')
{
    printf("%d",10);
}
rem=n%10;
n=n/10;
if(rem<=4)
{
    printf("%d",n*10);
}
else
{
    printf("%d",(n+1)*10);
}
return 0;
}
