#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,t1=1,t2=0,next term;
printf("enter the next trrm");
scanf("%d",&n);
printf("fibonocci series");
for(i=1;i<=n;i++)
{
printf("%d",t1);
next term t1+t2;
t1=t2;
t2=next term;
}
return 0;
}
