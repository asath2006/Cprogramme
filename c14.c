#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
   char str[250];
   scanf("%s",str);
   int len=strlen(str);
   for(int i=0;i<len;i++)
   {
      if(!isalpha(str[i]))
      {
         printf("Invalid");
         return 0;
       }
    }
    
   for(int i=0;i<len/2;i++)
   { 
       if(tolower(str[i])!=tolower(str[len-i-1]))
       {
             printf("Not palindrome");
             return 0;
        }
        
     }
     printf("Palindrome");
     return 0;
    }
