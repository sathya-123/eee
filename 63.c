#include<stdio.h>
int main()
{
  int n,i,c=0;
  char a[30];
  printf("enter the string");
  scanf("%[^\n]s",&a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]==' ')
    {
      c++;
    }
  }
  printf("%d",c+1);
  return 0;
}
