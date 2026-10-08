#include<stdio.h>
int main()
{
   char file1[100], file2[100], mergeFile[100];
   char ch;

   printf("Enter File 1 Name : ");
   scanf("%s", file1);
   printf("Enter File 2 Name : ");
   scanf("%s", file2);
   printf("Enter Merge File Name : ");
   scanf("%s", mergeFile);

   FILE *f1 = fopen(file1, "r");
   if(f1 == NULL)
   {
      printf("Error Opening File 1 ");
      return 1;
   }

   FILE *f2 = fopen(file2, "r");
   if(f2 == NULL)
   {
      printf("Error opening File 2");
      fclose(f1);
      return 1;
   }

   FILE *merge = fopen(mergeFile, "w");
   if(merge == NULL)
   {
      printf("Error Creating Merged File");
      fclose(f1);
      fclose(f2);
      return 1;
   }

   while((ch=fgetc(f1))!=EOF)
   {
      fputc(ch, merge);
   }

   while((ch=fgetc(f2))!=EOF)
   {
      fputc(ch, merge);
   }

   fclose(f1);
   fclose(f2);
   fclose(merge);

   printf("Files Merged Successfully");
   return 0;
}
