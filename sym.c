#include <stdio.h>
int main()
{
int a,b;
char symbol;
scanf("%d%d",&a,&b);
scanf("%s",symbol);
if(symbol=='%')
{
    printf("%d",a%b);
}
else
{
    printf("%d",a/b);
}

	return 0;
}
