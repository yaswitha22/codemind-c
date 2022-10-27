#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=0,val=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        c=0;
        if(arr[i]==-1)
        continue;
        else
        {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                arr[j]=-1;
                c++;
            }
        }
        }
        if(c>1)
        arr[i]==-1;
        if((c+1)>n/2)
        {
            val=arr[i];
        }
    }
    printf("%d",val);
}