#include<stdio.h>
void main()
{
  int a[20],n,i;
  printf("enter the n value and n numbers");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
    if(a[i]%2!=0)
    {
      printf("\t %d",a[i]);
    }
  }
}
