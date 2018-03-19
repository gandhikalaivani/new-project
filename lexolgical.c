#include <stdio.h>
#include<string.h>
int main()
{
  char a[10];
  int i,j,t,n;
  scanf("%s",a);
    n=strlen(a);
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(a[i]>a[j])
          {
          t=a[i];
          a[i]=a[j];
          a[j]=t;
          }
      }
  }
  for(i=0;i<n;i++)
  {
printf("%c",a[i]);
}
    return 0;
}
