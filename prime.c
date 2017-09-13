#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,flag=o;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%2==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d prime number",n);
else
printf("%d not a prime number",n);
}
