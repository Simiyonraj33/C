#include<stdio.h>
int main()
{
   int n,i,search, found = 0;

   printf("Enter the number of elements : ");
   scanf("%d", &n);

   int arr[n];

   printf("Enter %d elements : \n", n);
   for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }

   printf("Enter the Search Element : ");
   scanf("%d",&search);

   for(i=0;i<n;i++)
   {
      if(arr[i] == search)
      {
         printf("The Element is Found at Position : %d", i+1);
         found = 1;
         break;
      }
   }
   printf("\n");

   if(!found)
   {
      printf("No elements found !!\n");
   }

   return 0;
}
