#include<stdio.h>
int main()
{
  int m,n,a;
  printf("enter the number");
  scanf("%d %d",&m,&n);
  a=m+n;
  if(a%2==0)
  {
  printf("even");
  }
  else
  {
    printf("odd");
  }
  return 0;
}
