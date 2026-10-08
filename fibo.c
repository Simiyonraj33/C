#include<stdio.h>
int fib(int a);
int main()
{
   int i,a,result;
   printf("Enter a Numbr : ");
   scanf("%d", &a);
   printf("0 ");
   for(i=1;i<a;i++)
   {
   result = fib(i);
   printf("%d ", result);
   }
   return 0;
}
int fib(int n)
{
   if(n==0)
   {
      return 0;
   }
   else if(n==1)
   {
      return 1;
   }
   else
   {
      return fib(n-1) + fib(n-2);
   }
}
