#include<stdio.h>
int main()
{
   int s,k,i,n;
   printf("Enter the no.of rows : ");
   scanf("%d", &n);
   for(i=1;i<=n;i++)
   {
      for(s=i;s<n;s++)
      {
         printf(" ");
      }
      for(s=1;s<=(2*i-1);s++)
      {
         printf("*");
      }
      printf("\n");
   }
   for(i=n-1;i>=1;i--)
   {
      for(s=n;s>i;s--)
      {
         printf(" ");
      }
      for(s=1;s<=(2*i-1);s++)
      {
         printf("*");
      }
      printf("\n");
   }
   return 0;
}

