#include<stdio.h>
void main()
{
int num1,num2,max;
printf("enter two positive numbers");
scanf("%d %d",&num1,&num2);
max=(num1>num2)?num1:num2;
while(1)
{
if(max%num1==0 && max%num2==0)
{
printf("lcm of %d and %d is %d",num1,num2,max);
break;
}
++max;
}
}
