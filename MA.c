#include<stdio.h>
#include<conoi.h>
void main()
{
int i,j,n,a[200],h;
int hcf(int,int);
clrscr()
printf("enter the how many number");
scanf("%d"&n);
for(i=0;i<n;i++)
{
printf("enter the number");
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
h=hcf(a[i],a[i+1]);
a[i+1]=h;
}
printf("HCF is %d,h);
getch()
}
int hcf(inta,intb);
{
if(a%b==0)
{
return hcf;
}
else
{
return(hcf(b,a%b));
}
}
