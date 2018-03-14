#include<stdio.h>
 int main()
 {
   int i, j,flag,l,r;
   printf(" ENTER THE LOWER LIMIT : ");
   scanf("%d", &l);
   printf("\n ENTER THE UPPER LIMIT : ");
   scanf("%d", &r);
   for(i=l; i<=r; ++i)
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
         printf("%d\n",i);
  }
  return 0;
}

   
