#include<stdio.h>
void main()
{
int i,j,n,a[10],pos,num;
printf("enter the array size");
scanf("%d",&n);
printf("enter array element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("position to be deleted");
scanf("%d",&pos);
for(i=pos;i<n;i++)
{
a[i]=a[i+1];
}
n--;
printf("the resultant array is");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
