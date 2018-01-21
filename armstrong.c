#include<stdio.h>
void main()
{
int n,sum=0,rem=0,cube;
printf("enter a number");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
cube=rem*rem*rem;
sum=sum+cube;
 n=n/10;
}
if(sum==n)
printf("its a armstrong %d");
else
printf("its not a armstrong %d");
}
