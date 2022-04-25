#include<stdio.h>
int main()
{
    int n,arr[100],i,d,rev=0,c=0,temp=0;
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
        if(temp==rev)
        {
            c++;
        }
        rev=0;
    }
    printf("%d",c);
}