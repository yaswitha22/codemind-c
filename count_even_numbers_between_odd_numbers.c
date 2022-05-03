#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-2;i++)
    {
        if(arr[i]%2==1&&arr[i+2]%2==1)
        {
            if(arr[i+1]%2==0)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}