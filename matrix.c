#include<stdio.h>
void main()
{
int m,n,p,q,i,j,k,a[10][10],b[10][10],c[10][10];
printf("enter the size matrix A\n");
scanf("%d%d",&m,&n);
printf("enter the size matrix B\n");
scanf("%d%d",&p,&q);
if(n!=p)
{
	printf("matrix multiplication is not possible\n");
}
else
{
	printf("enter the elements of matrix A\n");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
{
	scanf("%d",&a[i][j]);
}
	printf("enter the elements of matrix B\n");
	for(i=0;i<p;i++)
	for(j=0;j<q;j++)
{
	scanf("%d",&b[i][j]);
}
	for(i=0;i<m;i++)
	for(j=0;j<q;j++)
{
	c[i][j]=0;
	for(k=0;k<n;k++)
	c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
printf("A-matrix is\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("B-matrix is \n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
printf("the resultant matrix C is \n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
}

