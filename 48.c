#include<stdio.h>
int main()
{
int n,sum=0,i,a;
float avg;
printf("enter the number");
scanf("%d",&n);
printf("enter the value");
for(i=1;i<=n;i++)
{
  scanf("%d",&a);
  sum=sum+a;
}
avg=sum/n;
printf("\n %f",avg);
return 0;
}
