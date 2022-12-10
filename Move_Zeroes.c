#include<stdio.h>
void zeroes(int arr[],int n)
{
    int end=0,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[end++]=arr[i];
        }
    }
    for(i=end;i<n;i++)
    {
        arr[i]=0;
    }
}
int main()
{
    int i,n,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    zeroes(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}