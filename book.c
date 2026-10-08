#include<stdio.h>

struct Library
{
   char title[100];
   char author[100];
   int pages;
   int year;
};

int main()
{
   struct Library book;
   struct Library *ptr;

   ptr = &book;

   printf("\n");
   printf("\n");

   printf("Enter Book Name : ");
   scanf(" %[^\n]", ptr->title);
   printf("Enter Author Name : ");
   scanf(" %[^\n]", ptr->author);
   printf("Enter Number Of Pages : ");
   scanf("%d", &ptr->pages);
   printf("Enter Publication Year : ");
   scanf("%d", &ptr->year);

   printf("\n\n=====Book Details=====\n");
   printf("Book Name : %s\n",ptr->title);
   printf("Author Name : %s\n", ptr->author);
   printf("No.Of Pages : %d\n", ptr->pages);
   printf("Publication Year : %d\n",ptr->year);
   printf("=====================\n\n");

   return 0;
}
