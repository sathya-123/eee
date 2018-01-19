#include<stdio.h>
void main()
{
int mi,ma,i;
printf("enter the numbers");
scanf("%d %d",&mi,&ma);
for(i=mi;i<ma;i++)
{
if(i%2==0)
printf("%d",i);
}
}
