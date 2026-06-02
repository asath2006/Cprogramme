#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define max 100
#define len 50
int main()
{
 char p[max];
char  word[max][len];
int count[len]={0};
int total=0;
printf("Enter the paragraph");
fgets(p,sizeof(p),stdin);
char*token=strtok(p," .,\n");
while(token!=NULL)
{
int f=0;
  
  for(int i=0;token[i]!='\0';i++)
   {
      token[i]=tolower(token[i]);
}
   for(int i=0;i<total;i++)
{
      if(strcmp(word[i],token)==0)
   {
         count[i]++;
          f=1;
          break;
    }
}
     if(!f)
{
      strcpy(word[total],token);
      count[total]=1;
        total++;
}
token=strtok(NULL," .,\n");
}
for(int i=0;i<total;i++)
{
   printf("%s =%d",word[i],count[i]);
}
return 0;
}

