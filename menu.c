#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char str1[20], str2[20];
   int choice,i,j;
   printf("\n=====MENU=====\n");
   printf("1. Length Of a String\n");
   printf("2. Reverse of a String\n");
   printf("3. String Concatenation\n");
   printf("4. Copy to Another String\n");
   printf("5. Compare 2 Strings\n");
   printf("Enter Your Choice : ");
   scanf("%d", &choice);
   switch(choice)
   {
      case 1:
         printf("Enter a String : ");
         scanf("%s", str1);
         i = strlen(str1);
         printf("Length of %s is %d", str1, i);
         break;
      case 2:
         printf("Enter a String : ");
         scanf("%s", str1);
         int rev=0;
         j = strlen(str1);
         for(i=0;i<=j;i++)
         {
            printf("%c",str1[j-i]);
         }
         break;
      case 3:
         printf("Enter String 1 : ");
         scanf("%s", str1);
         printf("Enter String 2 : ");
         scanf("%s", str2);
         strcat(str1 , str2);
         printf("/n%s", str1);
         break;
      case 4:
         printf("Enter a String : ");
         scanf("%s", str1);
         strcpy(str2 , str1);
         printf("String 1 = %s & String 2 = %s",str1,str2);
         break;
      case 5:
         printf("Enter String 1 : ");
         scanf("%s", str1);
         printf("Enter String 2 : ");
         scanf("%s", str2);
         i = strcmp(str1 , str2);
         if(i==0)
         {
            printf("Both Strings are equal");
         }
         else
         {
            printf("Both Strings are different ");
         }
         break;
      default:
         printf("Invalid Choice !");
         break;
   }
   printf("\n");
   return 0;
}
