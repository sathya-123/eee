#include<stdio.h>
int main() 
{
int a[100],n,sum=0,i;
printf("enter the n value\n");
scanf("%d",&n);
printf("enter the values");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
  sum=sum+a[i];
}
printf("%d",sum);
  return 0;
}
