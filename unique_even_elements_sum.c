#include<stdio.h>
int main()
{
    int n,i,j,sum=0,c=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                if(c==1)
                {
                    if(arr[i]%2==0)
                    {
                        sum+=arr[i];
                    }
                }
                if(j > i)
               arr[j] = 0;
            }
        }
    }
    printf("%d",sum);
    return 0;
}