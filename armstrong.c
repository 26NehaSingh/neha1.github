#include<stdio.h>
void main()
{
 int n,temp,r=0,s=0;
 printf("Enter the num u want to check\n");
 scanf("%d",&n);
 temp=n;
while(temp!=0)
 {  
    r=temp%10;
    s=s+(r*r*r);
 	temp=temp/10;
 }
 if(s==n)
 printf("yes");
 else
 printf("no");
}
