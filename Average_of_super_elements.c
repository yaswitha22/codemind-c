#include<stdio.h>
int main()
{
    int n,arr[100],c=0,i,j,sum=0,t=0;
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
        if((c+1)==arr[i])
        {
        sum+=arr[i];
        t++;
        }
    }
    if(t==0)
    printf("-1");
    else
    printf("%.2f",(float)sum/t);
}