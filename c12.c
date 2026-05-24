#include<stdio.h>
#include<string.h>
int main()
{
  char a[250];
  fgets(a,sizeof(a),stdin);
  int i=0;
  while(a[i]!='\0')
  {
    i++;
   }
   if(a[i-1]=='\n')
   {
     i--;
     }
  printf("%d",i);
  return 0;
  }
