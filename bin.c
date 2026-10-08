/* Program : Create a Student Database and Store it in a Binary File
      Date : 17|12|24                                                  */
#include<stdio.h>

struct Student
{
   int no;
   char name[50];
   float marks;
   char temp;
};

int main()
{
   struct Student s[50];
   int i;
   FILE *fp;
   fp = fopen("student.bin","wb");
   for(i=0;i<1;i++)
   {
      printf("Enter Student Details\n");
      printf("Enter Student ID : ");
      scanf("%d", &s[i].no);
      printf("Name : ");
      scanf(" %[^\n]", s[i].name);
      printf("Marks : ");
      scanf("%f", &s[i].marks);
      fwrite(&s[i], sizeof(s[i]), 1, fp);
   }
   printf("Content is stored in the Binary File Successfully !");
   printf("\n");
   fclose(fp);
   return 0;
}
