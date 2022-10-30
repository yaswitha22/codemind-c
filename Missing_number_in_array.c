#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,arr[100],j,k,sum=0,natu=0;
        scanf("%d",&n);
        for(j=0;j<n-1;j++)
        {
            scanf("%d",&arr[j]);
        }
        for(k=0;k<n-1;k++)
        {
           sum+=arr[k];
            
        }
       
        natu=(int)(n*(n+1))/2;
       printf("%d
",abs(natu-sum));
       
    }
}