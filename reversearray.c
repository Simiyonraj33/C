#include<stdio.h>

int main()
{
   int arr[100], n, i, *ptr;

   printf("Enter the no.of Elements : ");
   scanf("%d", &n);

   printf("Enter %d Elements : \n", n);
   for(i=0;i<n;i++)
   {
      scanf("%d", &arr[i]);
   }

   ptr = arr;

   printf("\n===Reverse Of The Array===\n ");
   for(i=n;i>0;i--)
   {
      printf("%d\t", *(ptr+i-1));
   }
   printf("\n");

   return 0;
}
