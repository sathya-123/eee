#include<stdio.h>
void main()
{
int minutes;
printf("enter the time in minutes");
scanf("%d",&minutes);
hour=minutes/60;
m1=minutes%60;
printf("the hour and minutes are %d %d",hour,m1);
}
