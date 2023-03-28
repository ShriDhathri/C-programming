#include<stdio.h>
int compare_strings(char[],char[]);
void concatenate(char[],char[]);
int string_length(char[]);
int main()
{
	char s1[1000],s2[1000];
	printf("input a string 1\n");
	gets(s1);
	printf("input a string 2\n");
	gets(s2);
	int length1=string_length(s1);
	int length2=string_length(s2);
	printf("length of %s = %d\n",s1,length1);
	printf("length of %s = %d\n",s2,length2);
	if(compare_strings(s1,s2)==0)
	printf("equal strings.\n");
	else
	printf("unequal strings.\n");
	concatenate(s1,s2);
	printf("string obtained on concatenation:\"%s\"\n",s1);
	return 0;
}
	int string_length(char s1[])
	{
		int c=0;
		while (s1[c]!='\0')
		c++;
		return c;
	}
	int compare_strings(char s1[],char s2[])
	{
		int c=0;
		while (s1[c]==s2[c])
		{
			if (s1[c]=='\0'||s2[c]=='\0')
			break;
			c++;
		}
			if (s1[c]=='\0' && s2[c]=='\0')
			return 0;
			else
			return 1;
		}
		void concatenate (char s1[],char s2[])
		{
			int c,d;
			c=0;
			while (s1[c]!='\0')
			{
				c++;
			}
			d=0;
			while(s2[d]!='\0')
			{
				s1[c]=s2[d];
				d++;
				c++;
			}
				s1[c]='\0';
			}
