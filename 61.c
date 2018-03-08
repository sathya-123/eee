#include<stdio.h>
int main()
{
  int n,i;
  char a[30];
  printf("enter the string");
  scanf("%s",&a);
  printf("enter the n value");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("%c",a[i]);
  }
  return 0;
}
