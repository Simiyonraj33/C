#include<stdio.h>
int main()
{
   float m1, m2, m3;
   float total, per;
   printf("Enter 3 marks :\n");
   scanf("%f %f %f", &m1, &m2, &m3);
   total = m1+m2+m3;
   per = total/3;
   if(per>79 && per<100)
   {
      printf("\nGrade : Good\n");
   }
   else if(per>59 && per<80)
   {
      printf("\nGrade : Average\n");
   }
   else if(per>39 && per<60)
   {
      printf("\nGrade : Fair\n");
   }
   else
   {
      printf("\nGrade : Fail\n");
   }
   return 0;
}
