#include<stdio.h>
int main()
{
    int n,arr[100],i,k,sum=0,t,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            t=i;
            break;
        }
    }
    for(j=0;j<t;j++)
    {
        sum+=arr[j];
    }
    printf("%d",sum);
}