#include<stdio.h>
int main()
{
int a1,a2,c;
printf("enter the intervals");
scanf("%d %d",&a1,&a2);
while(a1<a2)
{
  c=0;
  for(i=2;i<a1%2;i++)
  {
    c=1;
    break;
  }
}
  if(c==0)
  {
    printf("%d",a1);
    a1++;
  }
return 0;
}
