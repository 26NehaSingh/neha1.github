#include<stdio.h>
void main()
{
char C;
printf("enter the character \n");
scanf("%c",&C);
if(isalpha(C))
printf("alphabet"); 
else
printf("non-alpha");
}
