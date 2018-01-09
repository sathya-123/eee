#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("enter the year");
scanf("%d",&a);
b=a%4;
if(b==0)
printf("it is a leap year);
else
printf("it is not a leap year");
}
