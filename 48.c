#include<stdio.h>
int main()
{
int avg,n,sum=0,i,a;
printf("enter the number");
scanf("%d",&n);
printf("enter the value");
for(i=1;i<=n;i++)
{
  scanf("%d",&a);
  sum=sum+a;
}
avg=sum/n;
printf("\n %d",avg);
return 0;
}
