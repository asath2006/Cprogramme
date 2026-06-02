#include <stdio.h>
#include<stdlib.h>

struct item
{
    int roll;
    char name[250];
    
    
};
void display(struct item*arr,int n)
{
    for(int i=0;i<n;i++)
    printf("%d\n %s\n",arr[i].roll,arr[i].name);
}
void additem(struct item**arr,int *n)
{
    *arr=realloc(*arr,(*n+1)*sizeof(struct item));
    printf("Enter new item");
    
        scanf("%d",&(*arr)[*n].roll);
        scanf("%s",(*arr)[*n].name);
        (*n)++;
        
        
    
}
void deleteitem(struct item**arr,int *n,int index )
{
    if(index<0 || index>=*n)
    {
        printf("Invalid");
        return;
    }
     for(int i=index;i<*n-1;i++)
     {
         (*arr)[i]=(*arr)[i+1];
     }
     *arr=realloc(*arr,(*n-1)*sizeof(struct item));
     if(*n-1>0&& *arr==NULL)
     {
         printf("Memory allocation failed");
         exit(1);
     }
     (*n)--;
}

int main()
{
    struct item *arr=NULL;
    int n;
    scanf("%d",&n);
    arr=malloc(n*(sizeof(struct item)));
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d student detail",i+1);
        scanf("%d",&arr[i].roll);
        scanf("%s",arr[i].name);
    }
    display(arr,n);
    additem(&arr,&n);
    display(arr,n);
    int in;
    scanf("%d",&in);
    deleteitem(&arr,&n,in);
    display(arr,n);
   
 
  
  

    return 0;
}
