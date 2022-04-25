#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,rev=0,temp=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        while(arr[i])
        {
            d=arr[i]%10;
            rev=rev*10+d;
            arr[i]=arr[i]/10;
        }
        printf("%d ",rev);
        rev=0;
    }
}