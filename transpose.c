#include<stdio.h>

int main()
{
   int rows,cols,i,j;

   printf("Enter the no.of coloumns : ");
   scanf("%d", &cols);

   printf("Enter the no.of rows : ");
   scanf("%d", &rows);

   int mat[rows][cols], tran[rows][cols];

   printf("Enter %d Elements : \n", rows*cols);
   for(i=0;i<rows;i++)
   {
      for(j=0;j<cols;j++)
      {
         scanf("%d", &mat[i][j]);
      }
   }

   for(i=0;i<rows;i++)
   {
      for(j=0;j<cols;j++)
      {
         tran[j][i] = mat[i][j];
      }
   }

   printf("===TRANSPOSE===\n");
   for(i=0;i<rows;i++)
   {
      for(j=0;j<cols;j++)
      {
         printf("%d\t", tran[i][j]);
      }
      printf("\n");
   }

   return 0;
}


