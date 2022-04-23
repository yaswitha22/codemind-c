#include<stdio.h>
int main()
{
    int n,arr[100],os=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            os+=arr[i];
        }
    }
    printf("%d",os);
}