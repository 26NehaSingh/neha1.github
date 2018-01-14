#include<stdio.h>
void main()
{
char C;
printf("enter the character \n");
scanf("%c",&C);
if(isalpha(C)){
	if (C == 'a' || C=='e'||C=='i'||C=='o'||C=='u'||C=='A'||C=='E'||C=='I'||C=='O'||C=='U')
printf("character is vowel");
else
printf("character is consonant"); 
}
else
printf("invalid input");
}
