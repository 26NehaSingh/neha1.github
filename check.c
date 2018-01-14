# include<stdio.h>
void main()
{
	int N;
	printf("enter the number to check\n");
	scanf("%d",&N);
	if(N<0)
	printf("number is positive");
	else if(N==0)
	printf("0 is neither negative nor positive");
	else
	printf("number is negative");
}
