#include<stdio.h>
int main()
{
  int n,rem;
  printf("enter the number");
  scanf("%d",&n);
  while(n>0)
  {
    rem=n%10;
  n=n/10;
  }
    if(rem==0||rem==1)
    {
  printf("yes");
  }
  else
  {
    printf("no");
  }
return 0;
}
