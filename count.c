#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char ch,str[100];
   int digits = 0,vowel = 0, consonant = 0, space = 0, specialchar = 0, i, j;
   printf("Enter a String : ");
   scanf(" %[^\n]s", str);
   j = strlen(str);
   for(i=0;i<=j;i++)
   {
      ch = str[i];
      ch = tolower(ch);
      if(ch == '\n')
      {
         continue;
      }
      if(ch>='a' && ch<='z')
      {
         if(ch == 'a' || ch =='e' || ch =='i' || ch =='o' || ch=='u')
         {
            vowel++;
         }
         else
         {
            consonant++;
         }
      }
      else if(ch >= '0' && ch <= '9')
      {
         digits++;
      }
      else if(ch = ' ')
      {
         space++;
      }
      else
      {
         specialchar++;
      }
   }
   printf("\nVowel : %d",vowel);
   printf("\nConsonant : %d", consonant);
   printf("\nSpaces : %d", space-1);
   printf("\nDigits : %d", digits);
   printf("\nSpecial Charachters : %d",specialchar);
   return 0;
}
