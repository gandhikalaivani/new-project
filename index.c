#include<stdio.h>
int main()
{
  int n,j,a[10];
printf("enter the number");
scanf("%d",&n);
printf("array elements");
for(j=0;j<n;j++)
{
  scanf("%d",&a[j]);
}
printf("elements with index ");
for(j=0;j<n;j++)
{
  if(j<n)
  {
    printf("%d %d\n",a[j],j );
    }
    }
    return 0;
}
