#include<stdio.h>
#include<conoi.h>
int main()
{
int number,original number,reminder,result=0;
printf("enter the number");
scanf("%d",&number);
original number=number;
while(original number!=0)
{
reminder=original number%10;
result +=reminder*reminder*reminder;
original number/10;
}
if(result==number)
printf("%d is an amstrong number",number);
else
printf("%d is not an amstrong number",number);
return o;
}
