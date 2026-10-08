/* Program Name : Library Management Using UNION
* Date : 03|12|2024 */


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

union library
{
   int availablecopies;
};

int main()
{
   char title[100],author[100];
   int year;

   union library item;
   int choice;

   while(1)
   {
      printf("\n===Library Management System===\n");
      printf("1.Add Book\n");
      printf("2.Display Book\n");
      printf("3.Display Available Copies\n");
      printf("4.EXIT\n");
      printf("Enter your Choice : ");
      scanf("%d", &choice);
      printf("\n");

      switch(choice)
      {
         case 1:
            printf("Enter Book Title : ");
            scanf(" %[^\n]", title);
            printf("Enter Book Author : ");
            scanf(" %[^\n]", author);
            printf("Enter Year of Publications : ");
            scanf("%d", &year);
            printf("Enter Available Copies : ");
            scanf("%d", &item.availablecopies);
            printf("Book Added Successfully !!");
            break;
         case 2:
            printf("\n=====BOOK DETAILS=====\n");
            printf("Book Title : %s\n", title);
            printf("Book Author : %s\n", author);
            printf("Year of Publication : %d\n", year);
            printf("======================\n");
            break;
         case 3:
            printf("The Available Copies are %d books\n", item.availablecopies);
            break;
         case 4:
            printf("EXITING.....\n");
            exit(0);
         default:
            printf("Invalid Choice");
      }
   }

   printf("\n");
   return 0;
}
