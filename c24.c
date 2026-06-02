#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sort(char * c[],int n)
{
    for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
      { 
         if(strcmp(c[i],c[j])>0)
           {
              char*t=c[i];
              c[i]=c[j];
              c[j]=t;
}
}
}
}
int main()
{
 
   int n;
   printf("Enter the number of cities");
   scanf("%d",&n);
  char *c[n];
   for(int i=0;i<n;i++)
{
     char temp[250];
    scanf("%s",temp);
     c[i]=(char*)malloc(strlen(temp)+1);
     strcpy(c[i],temp);
}
   sort(c,n);
for(int i=0;i<n;i++)
{
  printf("%s \n",c[i]);
}
for(int i=0;i<n;i++)
{
   free(c[i]);
}
return 0;
}
