#include <stdio.h>

int numMinutes = 103; 

int main ()
{
if ( (numMinutes / 60) == 1 ) 
printf("%d hour",numMinutes/60);
else
printf("%d hours",numMinutes/60);

if ( (numMinutes % 60) == 1) 
printf(" %d minute\n",numMinutes%60);
else 
printf(" %d minutes\n",numMinutes%60);

return 0;
} 
