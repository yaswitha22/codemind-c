#include<stdio.h>
int main()
{
    int n,arr[100],c=0,i,j,sum=0,k=0;
    float avg=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            sum+=arr[i];
            k++;
        }
        c=0;
    }
    avg=sum/(float)k;
    printf("%.2f",avg);
}