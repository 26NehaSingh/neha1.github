#include<stdio.h>
void main()
{
int c=0,n;
printf("enter an integer\n");
scanf("%d",&n);
while(n!= 0)
{   n=n/10;
	++c;
}
printf("number of digit:%d",c);
}
