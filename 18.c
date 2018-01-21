#include<stdio.h>
int main()
{
int mi,ma,n,sum=0,cube,rem=0,i;
printf("enter the number");
scanf("%d",&n);
for(i=mi;i<ma;i++)
while(n!=0)
{
rem=n%10;
cube=rem*rem*rem;
sum=sum+cube;
n=n/10;
}
if(sum==n)
printf("its a armstrong");
else
printf("its not a armstrong");
}


