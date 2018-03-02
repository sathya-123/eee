#include<stdio.h>
int main()
{
  int x=0,y=1,z,i=1,n;
  scanf("%d",&n);
  printf("%d\t",y);
  while(i<n)
  {
    z=x+y;
    x=y;
    y=z;
    printf("%d\t",z);
  i++;
  }
return 0;
}
