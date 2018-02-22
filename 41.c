#include<stdio.h>
int main()
{
  int n,i;
  char a[100];
  printf("enter the string and number of times");
   scanf("%d",&n);
   scanf("%s",a);
  for(i=0;i<n;i++)
  {
    printf("%s \n",a);
  }
  return 0;
}
