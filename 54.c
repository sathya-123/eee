#include<stdio.h>
void main()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  if(n%2==0)
{
  printf("%d",n);
}  
else
{
  printf("%d",n-1);
}
}
