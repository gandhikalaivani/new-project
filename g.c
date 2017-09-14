#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n=0,low,,reminder,result=0,temp1,temp2;
printf("enter the two numbers(intervals)
scanf("%d%d",&low,&high);
printf("amstrong number between %d and %d are",low,high);
for(i=low+1;i<high;i++)
{
temp2=i;
temp1=i;
while(temp!=0)
{
temp1/10;
++n;
}
while(temp2!=0)
{
reminder=temp2%10;
result+=pow(reminder,n);
temp2/10;
}
if(result==i)
{
printf("%d",i);
}
n=0;
result=0;
}
getch();
}
