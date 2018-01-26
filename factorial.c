#include<stdio.h>
#include <math.h>
void main()
{
 int n,i,f=1;
 printf("Enter the number\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 	f=f*i;
 }
 printf("%d",f);
}
