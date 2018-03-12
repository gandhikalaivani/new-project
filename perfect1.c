#include <stdio.h>
#include<math.h>
int main(void) {
int a,b,result;
scanf("%d%d",&a,&b);
result=pow(a,b);
if(result==(a*a))
{
	printf("yes");
}
else
{
	printf("no");
}
	return 0;
}
