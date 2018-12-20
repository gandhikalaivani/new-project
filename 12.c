#include <stdio.h>
int main()
{
  char a[100];
  int n,i,c=0;
  scanf("%[^\n]s",a);
  for(i=0;a[i]!=0;i++)
  {
    c++;
  }
  printf("%d",c);
  return 0;
 }
