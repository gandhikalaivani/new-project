#include <stdio.h>
#include<string.h>
int main()
{
    int n,i;
  char a[100];
  scanf("%[^\n]s",a);
  n=strlen(a);
  for(i=n-1;i>=0;i--)
  {
  printf("%c",a[i]);
  }
  return 0;
 }
