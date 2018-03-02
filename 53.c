#include<stdio.h>
int main()
{
  int n,num=0,sum=0;
  printf("enter the number");
  scanf("%d",&n);
  while(n>0)
  {
    num=n%10;
    n=n/10;
    sum=sum+num;
  }
  printf("%d",sum);
return 0;
}
