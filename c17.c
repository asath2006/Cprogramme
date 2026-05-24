#include<stdio.h>
#include<string.h>
int firstoccurence(char str[],char sub[])
{
   int n=strlen(str);
   int m=strlen(sub);
   for(int i=0;i<=n-m;i++)
   {
      int j=0;
      for(j=0;j<m;j++)
      {
         if(str[i+j]!=sub[j])
         {
            break;
         }
      }
        if(j==m)
         {
             return i;
         }
        
        
    }
    return -1;
    }
            
int main()
{
   char str[220];
   char sub[250];
   scanf("%s",str);
   scanf("%s",sub);
   int index=firstoccurence(str,sub);
   printf("%d",index);
   return 0;
 }
   
