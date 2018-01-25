#include<stdio.h>
int main()
{
int a[50],i,j,n,temp;
printf("enter the size of an array");
scanf("%d",&n);
printf("enter the array value");
scanf("%d"&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
printf("the values in ascending order is %d",a[i]);
}
}
return 0;
}
