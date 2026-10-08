#include <stdio.h>

int main() {
   int rows, cols, i, j, k;
   printf("Enter the number of rows and columns: ");
   scanf("%d %d", &rows, &cols);
   int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];
   printf("Enter elements of first matrix:\n");
   for (i = 0; i < rows; i++)
   {
      for (j = 0; j < cols; j++)
      {
         scanf("%d", &matrix1[i][j]);

      }
   }
   printf("Enter elements of second matrix:\n");
   for (i = 0; i < rows; i++)
   {
      for (j = 0; j < cols; j++)
      {
         scanf("%d", &matrix2[i][j]);
      }
   }
   printf("Matrix Addition:\n");
   for (i = 0; i < rows; i++)
   {
      for (j = 0; j < cols; j++)
      {
         result[i][j] = matrix1[i][j] + matrix2[i][j];
         printf("%d\t", result[i][j]);
      }
      printf("\n");
   }
   printf("\nMatrix Subtraction:\n");
   for (i = 0; i < rows; i++)
   {
      for (j = 0; j < cols; j++)
      {
         result[i][j] = matrix1[i][j] - matrix2[i][j];
         printf("%d\t", result[i][j]);
      }
      printf("\n");
   }
   printf("\nMatrix Multiplication:\n");
   int mul[rows][cols];
   for (i = 0; i < rows; i++)
   {
      for (j = 0; j < cols; j++)
      {
         mul[i][j] = 0;
         for (k = 0; k < cols; k++)
         {
            mul[i][j] += matrix1[i][k] * matrix2[k][j];
         }
         printf("%d\t", mul[i][j]);
      }
      printf("\n");

   }
   return 0;
}
