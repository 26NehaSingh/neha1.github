#include<stdio.h>
void main()
{
	int n,k,i,j,flag;
	printf("Enter the first no.\n");
	scanf("%d",&n);
	printf("Enter the second no.\n");
	scanf("%d",&k);
	for(i=n+1;i<k;i++)
	{
    flag=0;
      for(j=2; j<=i/2; ++j)
      {
        if(i%j==0)
        {
          flag=1;
          break;
        }
      }
      if(flag==0)
        printf("%d ",i);
  }
}
