#include<stdio.h>


int main()
{
   int n,i,j,temp;
   printf("Enter the numbers of elements : ");
   scanf("%d",&n);
   int arr[n];
   printf("Enter %d elements \n", n);
   for(i=0;i<n;i++)
   {
      scanf("%d", &arr[i]);
   }
   for(i=0;i<n-1;i++)
   {
      for(j=0;j<n-i-1;j++)
      {
         if(arr[j] >arr[j+1])
         {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
      }
   }
   printf("\n=======The Sorted Array=======\n\n");
   for(i=0;i<n;i++)
   {
      printf("%d\t", arr[i]);
   }
   printf("\n");
   return 0;
}
