#include<stdio.h>
int main()
{
   int a;
   printf("\nEnter a No : ");
   scanf("%d", &a);
   if (a%6==0)
   {
      printf("\nThe number is Divisible by 6\n");
   }
   else
   {
      printf("\nThe number is not divisible by 6\n");
   }
   return 0;
}
