#include<stdio.h>
int main()
{
   int a,b, c;
   printf("Enter 3 No.s : \n");
   scanf("%d %d %d", &a, &b, &c);
   if(a+b>c && b+c>a && c+a>b)
   {
      printf("\nIt can form a Triangle\n");
   }
   else
   {                                                            
      printf("\nIt cannot form a Triangle\n");                  
   }
   return 0;
}
