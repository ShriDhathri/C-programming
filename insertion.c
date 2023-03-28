#include<stdio.h>
void main()
{
int i,n,a[10],j,num;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the array elements in ascending order");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("element to be inserted");
scanf("%d",&num);
for(i=0;i<n;i++)
{
if(a[i]<num)
for(j=n-1;j<=i;j--)
{
a[j+1]=a[j];
}
a[j+1]=num;
break;
}
n++;
printf("resultant matrix is:");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
