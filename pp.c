#include<stdio.h>
#include<conio.h>
int main()
{
int num,r,sum=0,temp;
printf("enter the number");
scanf("%d",&num);
for(temp=num;num!=0;num=num/10)
{
r=num%10;
sum=sum*10+r;
}
if(temp==sum)
printf("%d is a palindrome",temp);
else
printf("%d is not a palindrome",temp);
return 0;
}
