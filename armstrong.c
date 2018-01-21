#include<stdio.h>
void main()
{
int n,sum=0,rem=0;
printf("enter a number");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
cube=pow(rem,3);
sum=sum+cube;
}
if(sum==n)
printf("its a armstrong %d");
else
printf("its not a armstrong %d);
}
