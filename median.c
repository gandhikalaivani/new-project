#include <stdio.h>
int main() {
 int b[10],n,i;
 printf("Enter the number of elements in the array:\n");
 scanf("%d",&n);
 printf("Enter the elements of the array:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&b[i]);
 }
 if(n%2!=0)
 {
  printf("The median of the array is %d",b[n/2]);
 }
 else
 {
  printf("The median of the array is %d",(b[n/2]+b[(n/2)-1])/2);
 }
 return 0;
}
