#include<stdio.h>
int main()
{
    int n,arr[100],i,min=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>=arr[j])
            {
                min=arr[j];
            }
        }
    }
    printf("%d ",min);
}