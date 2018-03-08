#include<stdio.h>
void main()
{
  char a,b,c;
  printf("enter the numbers");
  scanf("%d%d",&a,&b);
  c=a*b;
  printf("\n the product is %d",c);
  if(a==b)
  {
  	printf("\n yes");
  	
  }
  else
  {
  	printf("\n no");
  }
}
