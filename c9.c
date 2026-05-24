#include<stdio.h>
#include<limits.h>
int main()
{
 int n;
 scanf("%d",&n);
 int r,re=0;
 
    while(n!=0)
      {
        r=n%10;
        if(re>(INT_MAX-r)/10)
        {
            printf("Overflow Occur");
            return 0;
         }
        re=re*10+r;
        n=n/10;
       }
      printf("%d",re);

  
   return 0;
   }
