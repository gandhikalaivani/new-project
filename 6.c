#include <stdio.h>
#include <stdlib.h>

int main()
{   
  char a[100];
  int i=0;
  scanf("%[^\n]s",a);
  int count = 0;
  while (a[i] != '\0')
  {
    if (a[i] == ')')
        count--;
    if (a[i] == '(')
        count++;
    if (count < 0)
    {
        printf("no");
        break;
    }   
    i++;        
  }
  if (count == 0)
      printf("yes");
  return 0;
 }
