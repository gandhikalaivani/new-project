#include <stdio.h>
#include<math.h>
int main()
{
  int n,k,c=0,i;
  scanf("%d%d",&n,&k);
  for(i=1;i<=n;i++)
  {
    if(pow(k,i)==n)
    {
      c++;
    }
    
  }
  if(c==1)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }

  return 0;
 }
