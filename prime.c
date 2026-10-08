#include <stdio.h>
int prime(int num);
int main() {
   int num, p;
   printf("Enter a number : ");
   scanf("%d", &num);
   p = prime(num);
   if(p==1)
   {
      printf("%d is a Prime Number\n", num);
   }
   else
   {
      printf("%d is a Not a Prime Number\n", num);
   }
   return 0;
}
int prime(int num)
{
   if(num <= 1) {
      return 0;
   }
   if(num>0)
   {
      int i;
      for(i=2;i<num;i++)
      {
         if(num%i==0)

         {
            return 0;
         }
      }
   }
   return 1;
}
