#include<stdio.h>
void main()
{
int score,aggr;
printf("enter the score and aggregate marks:");
scanf("%d %d",&score,&aggr);
if (score >= 85 && aggr >= 85)
{
printf("qualified through distinction:\n");
}
else if (score >= 60 || aggr >=60)
{
printf("qualified through first class:\n");
}
else if(!(score>=45))
{
printf("redo:\n");
}
}
