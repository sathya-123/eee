#include<stdio.h>
void main()
{
int n1,n,rem,rev=0;
printf("enter the numbers");
scanf("%d",&n);
n1=n;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(n1==rev)
printf("the number is palindrome");
else
printf("the number is not a palindrome");
}
