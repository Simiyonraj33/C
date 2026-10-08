#include<stdio.h>
int main()
{
   int a,sum=0,rem=0;
   printf("Enter a Number : ");
   scanf("%d", &a);
   int temp = a;
   while(a>0)
   {
      rem = a%10;
      sum = sum+(rem*rem*rem);
      a = a/10;
   }
   printf("\nSUM : %d",sum);
   if(temp==sum)
   {
      printf("\nArmstrong\n\n");
   }
   else
   {
      printf("\nNot an Armstrong\n\n");
   }
   return 0;
}
