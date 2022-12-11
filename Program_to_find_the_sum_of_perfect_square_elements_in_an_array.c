#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(int i=0;i<n;i++)
        {
            int sq=(int)sqrt(a[i]);
            if(sq*sq==a[i])
            {
                sum+=a[i];
            }
        }
        printf("%d",sum);
}