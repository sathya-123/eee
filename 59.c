#include<stdio.h>
void main()
{
  int i,m,a[10];
  printf("enter the elements");
  for(i=0;i<10;i++)
  {
  scanf("%d",&a[i]);
  }
  m=a[0];
  for(i=0;i<10;i++)
  {
    if(m<a[i])
    {
      m=a[i];
    }
  }
  printf("%d",m);
}
