#include<stdio.h>
int main()
{
    int n,arr[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<=n-2;i+=2)
    {
     for(j=0;j<arr[i];j++)
     {
     printf("%d ",arr[i+1]);
     }
    }
}