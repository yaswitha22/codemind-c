#include<stdio.h>
int sum(int arr[],int r,int l)
    {
        int s=0;
        for(int i=r;i<l;i++)
            s+=arr[i];
        return s;
    }
int main()
{
     int n,k,s=0,arr[100];
     scanf("%d%d",&n,&k);
     for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
     for(int r=0;r<n;r++)
    {
        for(int l=r+1;l<=n;l++)
        {
            int v=sum(arr,r,l);
            if(k==v)
                s++;
            }
        }
        printf("%d",s);
}