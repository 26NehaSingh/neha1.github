#include<stdio.h>
void  main()
{
    int N,f=1,i;
   
    printf("Enter the number\n");
    scanf("%d",&N);
     while(N<=20){
    for(i=1;i<=N;i++)
    {
        f=f*i;
    }
    printf("%d",f);
 break;
}
}
