#include <stdio.h>
int main()
{
  char a[100];
  int n,i;
  scanf("%[^\n]s",a);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
    if(i==0)
    {
      if(a[i]>='a'&&a[i]<='z')
      {
         a[i]=a[i]-32;
      }
    }
     if(a[i]==' ')
    {
      ++i;
      if(a[i]>='a'&&a[i]<='z')
      {
        a[i]=a[i]-32;
      }
    }
  }
  printf("%s",a);
    return 0;
}
