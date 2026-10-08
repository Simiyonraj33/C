#include <stdio.h>
int power(int base, int expr);
int main() {
   int base, result, expr;
   printf("Enter Base : ");
   scanf("%d", &base);
   printf("Enter Exponential : ");
   scanf("%d", &expr);
   result = power(base,expr);
   printf("Result : %d\n", result);
   return 0;
}
int power(int base, int expr)
{
   int ans= 1;
   int i;
   for(i=1;i<=expr;i++)
   {
      ans = ans*base;
   }
   return ans;
}
