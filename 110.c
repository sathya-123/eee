#include<stdio.h>
int main() 
{
  int k,i,sum=0;
  printf("enter the value\n");
  scanf("%d",&k);
  for(i=0;i<=k;i++)
  {
  sum=sum+i;
  }
  printf("%d",sum);
  return 0;
}
