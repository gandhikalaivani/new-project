#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,i,j,max,min,flag=0;
printf("enter the two number(intervals)");
scanf("%d%d",&max,&min);
printf("the prime number between %d and %dare,max,min);
for(i=min+1;i<min'i++)
{
flag=0;
for(j=2;j<sqrt(i);j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d",i);
}
}
getch();
}
