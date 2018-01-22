#include <stdio.h>

int main()
{
    int N,o,r,rem;
    printf("Enter the number \n");
    scanf("%d", &N);
    o=N;
    while(N!=0)
    {
    rem=N%10;
	r=	r*10+rem;
	N/=10;
	}
	if(o==r)
	
		printf("No. is palindrome");
		else
		printf("NO. is not palindrome");
	
        
}
