#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
   int *arr;
   int size;
   int capacity;
 }vector;
 void initvector(vector*v,int capacity)
 {
    v->size=0;
    v->capacity=capacity;
    v->arr=(int*)malloc(capacity*sizeof(int));
 }
 void resize(vector*v,int newcapacity)
 {
   v->capacity=newcapacity;
   v->arr=(int*)realloc(v->arr,v->capacity*sizeof(int));
  }
  
 void push(vector*v,int value)
 {
    if(v->size==v->capacity)
    {
        resize(v,v->capacity*2);
    }
   
   v->arr[v->size++]=value;
  }
  void printvector(vector*v)
  {
     for(int i=0;i<v->size;i++)
     {
        printf("%d",v->arr[i]);
      }
   }
  void pop(vector*v)
  {
    if(v->size==0)
    {
      printf("list is Empty");
    }
    else
    {
      v->size--;
    }
    
    }
  void freevector(vector*v)
  {
    free(v->arr);
  }
  
 
int main()
{
   vector v;
   initvector(&v,2);
   
   push(&v,1);
   push(&v,2);
   push(&v,3);
   printf("After push :");
   printvector(&v);
   pop(&v);
   printf("After pop :");
   printvector(&v);
   freevector(&v);
   return 0;
   
   }
 
   
