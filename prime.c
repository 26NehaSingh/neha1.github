#include <stdio.h>

int main()
{
    int N,c=0,i;
    printf("Enter the number \n");
    scanf("%d", &N);
    for(i=1;i<=N;i++){
	
	if(N % i == 0)
	{
	
	c++;
    }
   }    
   if(c==2)	
   {
		printf("yes");
	}
		else{
		printf("no");
	}
return 0;
        
}
