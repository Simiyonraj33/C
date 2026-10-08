#include<stdio.h>

void swap(int *a, int *b)  //Function Declaration Using Pointers
{
   int temp = *a;
   *a = *b;
   *b = temp;
}

int main()
{
   int num1, num2;

   printf("Enter First Number : ");
   scanf("%d", &num1);

   printf("Enter Second Number : ");
   scanf("%d", &num2);

   printf("\n===Before Swapping===\n");
   printf("A = %d B = %d\n", num1, num2);

   swap(&num1,&num2);  //Function Call

   printf("\n===After Swapping===\n");
   printf("A = %d B  = %d\n\n", num1, num2);


   return 0;
}
