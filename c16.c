#include<stdio.h>
int main()
{
   int n,sum=0;
   scanf("%d",&n);
   int a[n];
   int *ptr=a;
   for(int i=0;i<n;i++)
   {
      scanf("%d",ptr+i);
   }
   for(int i=0;i<n;i++)
   {  
      sum=sum+*(ptr+i);
   }
   float ave=(float)sum/n;
   printf("%.2f",ave);
   return 0;
   }
