#include<stdio.h>
#include<math.h>
int armstrong(int n,int l)
{
   int r;
   int sq=0;
   while(n!=0)
   {
      r=n%10;
      sq=sq+(int)pow(r,l);
      n=n/10;
    }
   return sq;
 }
      
int  len(int n)
{
   int r,re=0,c=0;
    while(n!=0)
    {
     
      c++;
      n=n/10;
     }
   return c;
 }
      
       
   
int main()
{
  int n;
  scanf("%d",&n);
  int l=len(n);
  int f=armstrong(n,l);
  if(n==f)
  {
    printf("Armstrong");
    }
    else
    {
      printf("Not Armstrong");
    }
    return 0;
  }
    
