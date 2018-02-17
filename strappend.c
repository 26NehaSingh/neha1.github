#include <stdio.h>
#include<string.h>
int main(void) {
	char stl[50];
	printf("Enter the string\n");
	scanf("%s",stl);
	strcat(stl,".");
	printf("%s",stl);
	return 0;
}
