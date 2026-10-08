/* Program Name : Student Database Using Structure
 * Date : 03|12|2024 */

#include<stdio.h>

struct student
{
   char name[100];
   int rollno;
   int marks;
   int sub;
   char grade;
};

struct subject
{
   int sub;
};

int main()
{
   struct student s[10];
   struct subject t[10];

   int i,j;
   int n;

   int total,avg;

   printf("Enter No.Of Students : ");
   scanf("%d", &n);

   for(i=0;i<n;i++)
   {
      printf("Student Name : ");
      scanf(" %[^\n]", s[i].name);
      printf("Roll Number : ");
      scanf("%d", &s[i].rollno);
      printf("Total Subjects : ");
      scanf("%d", &s[i].sub);
      for(j=0;j<s[i].sub;j++)
      {
         printf("Enter Mark Of Subject %d : ", i+1);
         scanf("%d", &t[j].sub);
      }
   }

   printf("\n");

   printf("====STUDENT DATABASE====\n");
   for(i=0;i<n;i++)
   {
      printf("Student Name : %s\n", s[i].name);
      printf("Roll Number : %d\n", s[i].rollno);
      for(j=0;j<s[i].sub;j++)
      {
         total += t[j].sub;
      }
      avg = total/s[i].sub;
      if(avg>=90)
      {
         printf("Grade : A");
      }
      else if(avg>=80 && avg<=90)
      {
          printf("Grade : B");
      }
      else if(avg>=70 && avg<=80)
      {
          printf("Grade : C");
      }
      else if(avg>=60 && avg<=70)
      {
          printf("Grade : D");
      }
      else
      {
          printf("Grade : FAIL");
      }
      printf("\n");
   }
   printf("\n");

   return 0;
}
