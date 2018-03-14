
#include<stdio.h>
#include<math.h>
 
int count(int a, int b);
int isprime(int n);
 
int main()
{
	int a,b;
	printf("Enter values of a and b :");
	scanf("%d %d",&a,&b);
	printf("\n\nTotal prime numbers = %d\n",count(a,b));
 
	return 0;
}
 
 
count(int a, int b)
{
	if(a>b)
		return 0;
	if(isprime(b))
	{
		printf("%d  ",b);
		return 1 + count(a,b-1);
	}
	else
		return count(a,b-1);
}
 
int isprime( int n)
{
	int i;
	for(i=2; i<=sqrt(n); i++)
		if(n%i == 0)
		    return 0;
	return 1;
}
