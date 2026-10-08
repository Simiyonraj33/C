#include<stdio.h>
int main()
{
   int a,temp,rev=0;
   printf("Enter a number : ");
   scanf("%d",&a);
   temp = a;
   while(a!=0)
   {
      rev = rev*10;
      rev = rev+(a%10);
      a = a/10;
   }
   printf("Reverse : %d", rev);
   if(temp==rev)
   {
      printf("\nThe Number is Palindrome\n");
   }
   else
   {
      printf("\nThe Number is not a Palindrome\n");
   }
   return 0;
}
