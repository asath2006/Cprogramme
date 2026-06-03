#include<stdio.h>
void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[250];
    int n=0;
    FILE *fin, *fout;
    fin=fopen("Input.txt","r");
    if(fin==NULL)
    {
        printf("failed");
        return 0;
    }
    while(fscanf(fin,"%d",&arr[n])==1)
    {
        n++;
    }
    fclose(fin);
    sort(arr,n);
    fout=fopen("out.txt","w");
    for(int i=0;i<n;i++)
    {
        fprintf(fout ,"%d" ,arr[i]);
    }
    fclose(fout);
    return 0;
    
}
