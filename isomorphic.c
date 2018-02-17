#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
int l1,l2,i,a[200]={0};
char ch1[20],ch2[20];
printf("Enter first string\n");
scanf("%s",&ch1);
printf("Enter second string\n");
scanf("%s",&ch2);
l1=strlen(ch1);
l2=strlen(ch2);
if(l1!=l2)
{
	printf("String is not valid");
}
else{
	for(i=0;i<l1;i++){
		if(a[(int)ch1[i]]!=0)
			{
				if(!(a[(int)ch1[i]]==(int)ch2[i]))
				{
					printf("not isomorphic");
					exit(0);
				}
			}
				else
				{
					a[(int)ch1[i]]=(int)ch2[i];
				}
			}
			printf("string is isomorphic");
	}
}
