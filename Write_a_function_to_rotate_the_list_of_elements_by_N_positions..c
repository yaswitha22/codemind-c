#include<stdio.h>
int main()
{
    int n,k,i,j,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        while(k!=0)
        {
            j=a[n-1];
            for(i=n-2;i>=0;i--)
            {
                a[i+1]=a[i];
            }
            a[0]=j;
            k--;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}