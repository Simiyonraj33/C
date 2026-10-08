#include<stdio.h>
int main()
{
   int n,digit,rem,rev=0;
   printf("Enter a no : ");
   scanf("%d", &n);
   while(n!=0)
   {
      rev = rev*10;
      rev = rev + (n%10);
      n = n/10;
   }
start:
   digit = rev%10;
   rev=rev/10;
   switch(digit)
   {
      case 0:
         printf("ZERO ");
         break;
      case 1:
         printf("ONE ");
         break;
      case 2:
         printf("TWO ");
         break;
      case 3:
         printf("THREE ");
         break;
      case 4:
         printf("FOUR ");
         break;
      case 5:
         printf("FIVE ");
         break;
      case 6:
         printf("SIX ");
         break;
      case 7:
         printf("SEVEN ");
         break;
      case 8:
         printf("EIGHT ");
         break;
      case 9:
         printf("NINE ");
         break;
      default:
         printf("Invalid Choice !");
         break;
   }
   if(rev!=0)
   {
      goto start;
   }
   printf("\n\n");
   return 0;
}

