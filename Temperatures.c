#include<stdio.h>
int main()
{
    int n,a[100],c=0,k=0,t=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[i] and i!=j)
            {
                c+=1;
                break;
            }
            else
            {
                c+=1;
            }
            if(j==n-1)
            {
                c=0;
            }
        }
        printf("%d ",c);
    }
}