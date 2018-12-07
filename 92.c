#include<stdio.h>
int main()
{
  int a,rem;
  scanf("%d",&a);
  while(a!=1)
  {
    rem=a%2;
    if(rem!=0)
    {
      printf("%d",a);
    }
    a=a/2;
  }
  return 0;
}
