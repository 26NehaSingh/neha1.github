#include<stdio.h>
void main()
{
int N,sum=0,i;
printf("enter num of natural number\n");
scanf("%d",&N);
for(i=0;i<=N;i++)
{
sum=sum+i;	
}
printf("%d",sum);
}
