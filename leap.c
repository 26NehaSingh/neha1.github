#include<stdio.h>
void main()
{
int year;
printf("enter year \n");
scanf("%d",&year);
if(year%4 == 0)
{
	if(year%100==0)
	{
		if(year%400==0)
		printf("yes");
		else
		printf("no");
	
	}
	else
	printf("yes");
}
else
printf("no");
}
