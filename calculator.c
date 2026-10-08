#include<stdio.h>
int main()
{
   int a,b,c,n;
   printf("Enter 2 no.s :\n");
   scanf("%d %d" ,&a, &b);
   printf("\nMENU\n");
   printf("1. ADD\n");
   printf("2. SUBRACT\n");
   printf("3. MULTIPLY\n");
   printf("4. DIVIDE\n");
   printf("Enter Your Choice : ");
   scanf("%d", &n);
   switch(n)
   {
      case 1:
         c = a+b;
         printf("\n%d + %d = %d\n", a, b, c);
         break;
      case 2:
         c = a-b;
         printf("\n%d - %d = %d\n", a, b, c);
         break;
      case 3:
         c = a*b;
         printf("\n%d * %d = %d\n", a, b, c);
         break;
      case 4:
         c = a/b;
         printf("\n%d / %d = %d\n", a, b, c);
         break;
      default:
         printf("\nInvalid Choice !\n");
         break;
   }
   return 0;
}
