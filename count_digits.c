#include<stdio.h>
int main()
{
    int n,arr[100],c=0,i,d,temp=0;
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
            c++;
            arr[i]=arr[i]/10;
        }
        if(temp==0)
        {
            c++;
        }
        printf("%d ",c);
        c=0;
    }
}