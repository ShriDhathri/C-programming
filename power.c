#include<stdio.h>
void main ()
{
int i,n,x,a=1;
printf("enter the number");
scanf("%d",&n);
printf("enter the power");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
a = a * n;
}
printf("power is (%d,%d)=%d",n,x,a);
}
