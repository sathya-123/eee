#include<stdio.h>
int main()
{
  int n,l,r;
  printf("enter the number");
  scanf("%d%d%d",&n,&l,&r);
  if(l<n && n<r)
{
  printf("yes");
}  
else
{
  printf("no");
}
return 0;
}
