#include<stdio.h>
#include <math.h>
void main()
{
 int n,k,temp,temp1,r=0,s=0,m=0,i;
 printf("Enter the first num want to check\n");
 scanf("%d",&n);
 printf("Enter the second num want to check\n");
 scanf("%d",&k); 
 temp=n;
for(i=n+1;i<k;++i)
 {   temp1=i;
     temp=i; 
     while(temp!=0)
     {
     	temp=temp/10;
     	++m;
	 }
	 while(temp1!=0){
	
    r=temp1%10;
    s=s+pow(r,m);
 	temp1=temp1/10;
 }
 if(s==i){
 
 printf("%d",i);
}
m=0;
s=0;
}
}
