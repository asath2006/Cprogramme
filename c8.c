#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int t1=0,t2=1;
  printf("%d %d",t1,t2);
 int t3;
  for(int i=0;i<n-2;i++)
  {
       t3=t1+t2; 
        printf("%d",t3);
       t1=t2;
       t2=t3;
    }
    return 0;
   }
    
