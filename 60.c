#include<stdio.h>
int main()
{
  int a=0,b=1,c,i=1,n;
  scanf("%d",n);
  printf("%d",b);
  while(i<n)
  {
    c=a+b;
    a=b;
    b=c;
    printf("%d",c);
  i++;
  }
return 0;
}
