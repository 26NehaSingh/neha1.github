#include <stdio.h>

int main(void) {
 int N,rn,r;
 printf("Enter the number\n");
 scanf("%d",&N);
  while(N!=0)
  {
  	r=N%10;
  	rn=rn*10+r;
  	N=N/10;
  }
  printf("%d",rn);
	return 0;
}
