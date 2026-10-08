#include<stdio.h>
int fac(int num);
int main()
{
   int num, fact;
   printf("Enter a Number : ");
   scanf("%d", &num);
   fact = fac(num);
   printf("Factorial : %d\n", fact);
   return 0;
}
int fac(int num)
{
   if(num==0)
   {
      return 1;
   }
   else
   {
      return  (num*fac(num-1));
   }
}
