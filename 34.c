#include<stdio.h>
void main()
{
  char a[50];
  int i,b;
  printf("enter the line");
  scanf("%[^\n]",a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]=='.')
    {
      b++;
    }
  }
  printf("%d",b);
}
