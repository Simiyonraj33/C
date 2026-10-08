#include<stdio.h>

struct Library
{
   char name[100];
   char post[100];
   char company[100];
   char salary[100];
};


int main()
{
   struct Library employee;
   struct Library *ptr;

   ptr = &employee;

   printf("\n");
   printf("\n");


   printf("Enter Employee Name : ");
   scanf(" %[^\n]", ptr->name);
   printf("Enter Company : ");
   scanf(" %[^\n]", ptr->company);
   printf("Enter Position : ");
   scanf(" %[^\n]", ptr->post);
   printf("Enter Amount of Salary : ");
   scanf(" %[^\n]", ptr->salary);


   printf("\n\n=====Employee Details=====\n");
   printf("Employee Name : %s\n",ptr->name);
   printf("Company : %s\n", ptr->company);
   printf("Position : %s\n", ptr->post);
   printf("Salary : %s\n", ptr->salary);
   printf("==============================\n\n");

   return 0;
}
