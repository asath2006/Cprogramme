#include<stdio.h>
int main()
{
 int fact=1;
 int n;
 scanf("%d",&n);
 if(n!=0)
 {
 for(int i=1;i<=n;i++)
 {
    fact=fact*i;
 }
 }
 printf("%d",fact);
 return 0;
 }
 
