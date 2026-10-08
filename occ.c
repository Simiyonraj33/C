#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char str1[100], sub[100];
   int i,j,l1,l2,m,count=0;
   printf("Enter a String : ");
   scanf("%[^\n]s", str1);
   printf("Enter the Sub-String : ");
   scanf(" %[^\n]s", sub);
   l1 = strlen(str1);
   l2 = strlen(sub);
   m = l1-l2;
   for(i=0;i<l1;i++)
   {
      for(j=0;j<l2;j++)
      {
         if(str1[i+j]==sub[j])
         {
            count++;
         }
         if(j!=l2)
         {
            break;
         }
      }
   }
      printf(" [%s] occured %d times\n",sub, count);
      return 0;
}
