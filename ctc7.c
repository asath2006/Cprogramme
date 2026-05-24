#include<stdio.h>
int main()
{
 int fact=1;
 int n;
 scanf("%d",&n);
 for(int i=0;i<=n;i++)
 {
  fact=fact*i;
 }
 printf("%d",fact);
 return 0;
 }
