/* Program : Copy Source File To Destination File
 * Date    : 17|12|24 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
   char srcFile[100], desFile[100];
   char ch;

   printf("Enter the Source File Name      : ");
   scanf("%s", srcFile);

   printf("Enter the Destination File Name : ");
   scanf("%s", desFile);

   FILE *src = fopen(srcFile, "r");
   if(src == NULL)
   {
      printf("Error Opening Source File");
      return 1;
   }

   FILE *des = fopen(desFile, "w");
   if(des == NULL)
   {
      printf("Error Opening Destoination File");
      fclose(src);
      return 1;
   }

   while((ch = fgetc(src))!=EOF)
   {
      fputc(ch, des);
   }

   fclose(src);
   fclose(des);

   printf("File Copied Successfully !\n");
   return 0;
}
