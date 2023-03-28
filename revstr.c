#include<stdio.h>
#include<string.h>
void main()
{
char s1[20],s2[20];
int i=0,j=0,l=0,s=0;
printf("enter first string");
gets(s1);
printf("second string");
gets(s2);
{
j=strlen(s1);
l=strlen(s2);
if (j==l)
{
while(i < j)
{
if (s1[i]==s2[i])
i++;
else
break;
}
if(i==j)
{
s=1;
}
}
printf("two strings are equal");
if (j!=l)
printf("two strings are not equal");
if (s==0)
{
if(s1[i] > s2[i])
printf("string 1 is greater than string 2");
else
printf("string 2 is greater than string 1");
}
}
}
