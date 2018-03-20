#include<stdio.h>
int main() 
{
  int n,arr[60],min,i;
  printf("enter the value\n");
  scanf("%d",&n);
  printf("enter the numbers");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  min=arr[0];
  for(i=0;i<n;i++)
  {
  if(min>arr[i])
 {
  min=arr[i];
 }
  }
  printf("%d",min);
  return 0;
}
