#include<stdio.h>
int main()
{
int i,j,r,c=1,s;
printf("enter the number of rows:");
scanf("%d",&r);
for(i=0;i<r;i++)
{
for(s=1;s<=r-i;s++)
printf(" ");
for(j=0;j<=i;j++)
{
if(j==0||i==0)
c=1;
else
c = c*(i-j+1)/j;
printf("%2d",c);
}
printf("\n");
}
return 0;
}
