#include<stdio.h>
int main()
{
char a[40],c;
printf("enter a number");
scanf("%c",&c);
if(isdigit(c)==0)
{
printf("%c is not numeric");
}
else
{ 
printf("%c is numeric");
}
}
