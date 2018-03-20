#include<stdio.h>
int main() 
{
  int n,a[60],min,max,i;
  printf("enter the value\n");
  scanf("%d",&n);
  printf("enter the numbers");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  max=a[0];
  min=a[0];
  for(i=0;i<n;i++)
  {
  if(max<a[i])
  {
    max=a[i];
  }
  if(min>a[i])
{
  min=a[i];
}
    
  }
  printf("%d",max);
  printf("%d",min);
  return 0;
}
