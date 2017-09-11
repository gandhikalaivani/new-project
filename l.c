#include<stdio.h>
#include<conio.n>
int main()
{
int a,b,c;
printf("enter a,b,c value");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a value is high");
}
else if (b>a&&b>c)
{
printf("b value is high");
}
else if (c>a&&c>b)
{
printf("c value is high");
}
else
{
printf("all values is are equal or two values are equal");
}
return 0;
}
