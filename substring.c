#include<stdio.h>
#include<string.h>
void main()
{
char s1[20],s2[20];
int i=0,n,j=0;
printf("enter the string");
gets(s1);
printf("enter the number of character to be copied");
scanf("%d",&n);
while(s1[j]!='\0')
{
s2[i]=s1[j];
i++;
}
s2[i]='\0';
printf("substring is");
puts(s2);
}
