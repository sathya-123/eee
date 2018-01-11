#include<stdio.h>
int main()
{
long long n;
int count=0;
printf("enter the value");
scanf("%lld",&n);
while(n!=0)
{
n=n/10;
++count;
}
printf("number of digits in integer%d",count);
}
