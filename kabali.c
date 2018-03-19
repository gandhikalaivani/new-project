#include <stdio.h>
int main()
{
int a[10],b[10],i;
for(i=0;i<3;i++)
{
scanf("%d%d",&a[i],&b[i]);
}
for(i=0;i<3;i++)
{
if(a[i]>b[i])
{
    printf("%d\n",a[i]-b[i]);
}
else
{
     printf("%d\n",b[i]-a[i]);
}
}
	return 0;
}
