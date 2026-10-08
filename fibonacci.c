#include<stdio.h>
int main()
{
   int n1,n2,sum,n,i;
   n1=0;
   n2=1;
   sum=0;
   printf("\nHow many elements do you want ? ");
   scanf("%d",&n);
   printf("%d\t%d\t",n1,n2);
   for(i=2;i<=n;i++)
   {
      sum = n1+n2;
      printf("%d\t",sum);
      n1=n2;
      n2=sum;
   }
   printf("\n\n");
   return 0;
}
