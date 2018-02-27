#include<stdio.h>
void main()
{
  char a[50];
  int i,b=0,c=0,d=0;
  printf("enter the line");
  scanf("%s",&a[i]);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
    {
      b++;
    }
    else if(a[i]>='0'||a[i]<=9)
    {
      c++;
    }
    else
    {
      d++;
    }
  }
  printf("%d",d);
}
