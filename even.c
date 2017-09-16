#include<stdio.h>
#include<conio.h>
void main()
{
int f,l,i;
printf("enter the first interval");
sacnf("%d",&f);
printf("enter the second interval");
scanf("%d",&l);
for(i=f;i<=l;i++)
{
if(i%2==0)
{
printf(" %d even number",i)
}
}
