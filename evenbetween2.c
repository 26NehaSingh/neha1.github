#include<stdio.h>
void main()
{
	int n,k,i;
	printf("Enter the first no.\n");
	scanf("%d",&n);
	printf("Enter the second no.\n");
	scanf("%d",&k);
	for(i=n+1;i<k;i++)
	{
		if(i%2==0){
		
		printf("%d\t",i);
	}
}
}
