#include<stdio.h>
#include<string.h>
int main()
{
  char str[70];
  printf("enter the string");
  scanf("%s",&str);
  printf("the reverse strig is %s",strrev(str));
  return 0;
}
